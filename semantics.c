#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantics.h"
#include "structures.h"
#include "symbol_table.h"

int errors = 0,global_offset = 0,local_offset = 0;

environment_list* create_environment(is_function *function){

	environment_list *env = (environment_list*)malloc(sizeof(environment_list));
	env->name = function->id;
	env->returnType = function->return_type;
        env->argument_list = function->argument_list;
	env->type = func;
	env->next = NULL;
        
	return env;
}

table_element* create_symbol(int offset, char* name, unsignedVariableType type){
	table_element* el=(table_element*)malloc(sizeof(table_element));
	strcpy(el->name,name);
	el->type=type;
	el->next=NULL;
	el->offset=offset;
        el->initialized = 0;
	return el;
}

table_element* lookupElement(table_element* table, char *str){

	table_element *aux;

	for(aux=table; aux; aux=aux->next)
		if(strcmp(aux->name, str)==0)
			return aux;

	return NULL;
}

environment_list* lookupEnvironment(environment_list* list, char *str){

	environment_list *aux;

	for(aux=list; aux; aux=aux->next)
		if(strcmp(aux->name, str)==0)
			return aux;

	return NULL;
}


table_element* searchVar(environment_list *env,table_element *global, table_element *local, char *name){
    
    table_element *aux = lookupElement(local,name);    
    if(!aux){
        aux = lookupElement(global,name);
        if(!aux){
            if(env->father != NULL){
                return lookupElement(env->father->locals,name);
            }
            else{
                return NULL;
            }
                
        }
            
    }
    return aux;
}


prog_env* semantic_analysis(is_program *prog){
	prog_env* pe = (prog_env*)malloc(sizeof(prog_env));

	semantic_analysis_global_variables(pe,prog->variable_list);
        semantic_analysis_function_list(pe,prog->function_list);
	semantic_analysis_main(pe,prog->main);

	
	return pe;
}

void semantic_analysis_global_variables(prog_env *pe, is_global_list *list){

	is_global_list *aux = list;
	if(aux){
		for(;aux!=NULL;aux=aux->next){
			semantic_analysis_global_variable(pe,aux->dec);
		}
	}

}

void semantic_analysis_global_variable(prog_env *pe, is_global_dec *dec){
	pe->global = semantic_analysis_declaration(pe,pe->procs,pe->global,GLOBAL,dec->declaration);

}

table_element* semantic_analysis_declaration(prog_env* pe,environment_list *env, table_element *variables,globalType type, is_declaration *declaration){


	return semantic_analysis_variable_list(pe,env,variables,type,declaration->type,declaration->variable_list);

}

table_element* semantic_analysis_variable_list(prog_env *pe,environment_list *env,table_element *variables,globalType typ,unsignedVariableType type, is_variable_list *variable_list){

	is_variable_list *aux = variable_list;

	if(aux){
	
		for(; aux!=NULL; aux=aux->next){
			variables = semantic_analysis_variable(pe,env,variables,typ,type,aux->variable);
		}
	}

	return variables;

}

table_element* semantic_analysis_variable(prog_env *pe,environment_list *env, table_element *variables, globalType typ, unsignedVariableType type, is_variable *variable){

	if(type == is_void){
		printf(" %d: variable with name %s cannot have void type!\n",variable->line,variable->id);
		errors++;
	}

	int offset;
	table_element *element;

	if(typ==GLOBAL){
		offset = global_offset++;
	}
	else{
		offset = local_offset++;
	}
	
	element = create_symbol(offset, variable->id,type);
        
        if(variable->expression != NULL){
                semantic_analysis_var_expression(pe,env,variables,type,variable->expression,variable->line);
                element->initialized = 1;
        }

	return insertVariable(pe,env,variables,variable->line,variable->id,element,typ);
}


table_element* insertVariable(prog_env* pe, environment_list *env,table_element * variables,int line, char *name, table_element *el, globalType type){
    

    table_element *aux = lookupElement(variables,name);

    if(aux != NULL){
        if(type == GLOBAL)
            printf("%d - global variable with name %s already declared!\n",line,name);
        else
            printf("%d - local variable with name %s already declared!\n",line,name);
        
            errors++;	
    }
    else{
        if(variables == NULL){
            variables = el;
        }
        else{
            for(aux=variables; aux->next!= NULL;aux = aux->next);
            aux->next = el;	
        }
    }

    return variables;
    
}


unsignedVariableType semantic_analysis_var_expression(prog_env *pe,environment_list *env, table_element *variables, unsignedVariableType type, is_expression *expression, int line){
    
    
    switch(expression->type){
        
        case is_val:
            return semantic_analysis_value(pe,env,variables,type,expression->exp.value,line);
            break;
        case is_infix:
            ;
            unsignedVariableType typ = semantic_analysis_var_expression(pe,env,variables,type,expression->exp.infix->exp1,line);
            unsignedVariableType typ2 = semantic_analysis_var_expression(pe,env,variables,type,expression->exp.infix->exp2,line);
            if(typ != typ2){
                printf("%d - Type mismatch: infix expression with incompatible types\n",line);
                errors++;
            }
            break;
        case is_funct_call:
            semantic_analysis_function_call(pe,env,variables,type,expression->exp.function,1);
            break;
        case is_exp:
            semantic_analysis_var_expression(pe,env,variables,type,expression,line);
            break;
        case is_if_exp:
            
            break; 
    }
    
    
    
}


unsignedVariableType semantic_analysis_value(prog_env *pe,environment_list *env, table_element *variables,unsignedVariableType type, is_value *value, int line){
    
    if(value->type == is_ident){
        
        char *id = value->valueType._string;
        table_element *aux = searchVar(env,pe->global,variables,id);
        
        if(!aux){
            printf("%d - %s cannot be resolved\n",line,id);
            return is_void;
        }
        else{
            if(!aux->initialized){
                printf("%d - The variable with name %s may not have been initialized\n", line, id);
                errors++;
            }
        }
        
        if(aux->type != type && type != is_void){
            printf("%d - Type mismatch: assignment with incompatible types\n",line);
            errors++;
        }
        return aux->type;
        
    }
    else{
        if(value->type != type && type != is_void){
            printf("%d - Type mismatch: assignment with incompatible types\n",line);
            errors++;
        }
        return value->type;
    }
    
    
    
}

void semantic_analysis_function_call(prog_env *pe,environment_list *ff, table_element *variables,unsignedVariableType type, is_function_call *call, int exp){
    
    char *id = call->id;
    int line = call->line;
    environment_list *env = lookupEnvironment(pe->procs,id);
    
    if(env == NULL){
        printf("%d - The method %s() is undefined \n", line,id);
        errors++;
    }
    else{        
        if(type != env->returnType && exp){
            printf("%d - Type mismatch: assignment with incompatible types\n",line);
            errors++;
        }
        
        semantic_analysis_parameters(pe,variables,env,call->parameter_list,line);
        
        
    }    
    
}

void semantic_analysis_parameters(prog_env *pe, table_element *variables, environment_list *env, is_parameter_list *list, int line){
    
    is_parameter_list *aux = list;
    is_argument_list *args = env->argument_list;
    
    if(aux){
        for(; aux!= NULL && args != NULL ; aux = aux->next, args = args->next){
            
            semantic_analysis_var_expression(pe,env,variables,args->argument->type,aux->expression,line);
            
        }
        if(aux != NULL || args != NULL){
            
            if(aux == NULL){
                printf("%d - too few arguments to function %s()\n",line,env->name);
                errors++;
            }
            if(args == NULL){
                printf("%d - too many arguments to function %s()\n",line,env->name);
                errors++;
            }
            
        }
    }
    
}

void semantic_analysis_main(prog_env* pe, is_main *main){

	is_function *function = (is_function*)malloc(sizeof(is_function));
	
	function->id = "MAIN";
	function->scope_type = is_public;
	function->return_type = is_void;
	function->argument_list = NULL;
	function->code = main->code;

	semantic_analysis_function(pe,function);

}


void semantic_analysis_function(prog_env *pe, is_function *function){

	if(lookupEnvironment(pe->procs,function->id)){
		printf("%d - function with name %s already declared!\n",function->line,function->id);
		errors++;
	}
	else{
		environment_list *env = create_environment(function);
		if(pe->procs == NULL){
			pe->procs = env;
		}
		else{
			environment_list *aux;
			for(aux=pe->procs; aux->next!= NULL;aux = aux->next);
			aux->next = env;
		}
                
                if(env->argument_list != NULL)
                        semantic_analysis_argument_list(pe,env);
                
                        semantic_analysis_operation_list(pe,env,function->code->operation_list);
	}
}


void semantic_analysis_argument_list(prog_env *pe, environment_list *env){
    is_argument_list *aux = env->argument_list;
    for(;aux != NULL;aux = aux->next){
        
        is_variable *var = (is_variable*)malloc(sizeof(is_variable));
        
        var->id = aux->argument->id;
        var->expression = NULL;
        
        env->locals = semantic_analysis_variable(pe, env,env->locals, LOCAL, aux->argument->type,var);       
    
    }
    
}

void semantic_analysis_operation_list(prog_env *pe,environment_list *env,is_operation_list *list){

	is_operation_list *aux = list;

	if(aux){
            int i= 0;
		for(; aux!=NULL; aux=aux->next){
			semantic_analysis_operation(pe,env,aux->operation);
		}
	}



}


void semantic_analysis_operation(prog_env *pe,environment_list *env,is_operation *operation){
    
    switch(operation->type){
        case is_dec:
            env->locals = semantic_analysis_declaration(pe,env,env->locals,LOCAL,operation->oper.declaration);
            break;
        case is_assign:
            semantic_analysis_assignment(pe,env,env->locals,operation->oper.assignment);
            break;
        case is_funct:
            semantic_analysis_function_call(pe,env,env->locals,is_void,operation->oper.function,0);
            break;
        case is_un:
            semantic_analysis_unary(pe,env,env->locals,operation->oper.unary);
            break;
        case is_cyc:
            semantic_analysis_cycle(pe,env,env->locals,operation->oper.cycle);
            break;
        /*case is_cond:
            semantic_analysis_condition(operation->oper.condition);
            break;
        case is_cont:
            semantic_analysis_condition(operation->oper.control);
            break;*/
    }



}

void semantic_analysis_assignment(prog_env *pe,environment_list *env, table_element *variables,is_assignment *assignment){
    
    table_element *aux = searchVar(env,pe->global,variables,assignment->id);
    unsignedVariableType tipo;
    if(!aux){
        printf("%d - %s cannot be resolved\n",assignment->line,assignment->id);
        errors++;
        tipo = is_void;
    }
    else{
         tipo = aux->type;
         aux->initialized = 1;
    }
    
    
    semantic_analysis_var_expression(pe,env,variables,tipo,assignment->expression,assignment->line);
    
}

void semantic_analysis_function_list(prog_env *pe, is_function_list *list){
    
    
    is_function_list *aux = list;
	if(aux){
		for(;aux!=NULL;aux=aux->next){
			semantic_analysis_function(pe,aux->function);
		}
	}
      
}


void semantic_analysis_unary(prog_env *pe, environment_list *env, table_element *variables, is_unary *unary){
    
    table_element *aux = searchVar(env,pe->global,variables,unary->id);
    
    if(!aux){
        printf("%d - %s cannot be resolved\n",unary->line,unary->id);
        errors++;
    }
    else{
        if(aux->type == is_string || aux->type == is_char){
            printf("%d - Type mismatch: cannot convert %s to int\n",unary->line, unary->id);
            errors++;
        }
        else{
            if(!aux->initialized){
                printf("%d - The variable with name %s may not have been initialized\n", unary->line, unary->id);
                errors++;
            }
        }
    }
    
}


void semantic_analysis_cycle(prog_env *pe, environment_list *env,table_element *variables, is_cycle *cycle){
    
    switch(cycle->type){
        case is_for_cycle:
            semantic_analysis_for(pe,env,variables,cycle->cyc.for_cycle);
            break;
        case is_while_cycle:
            semantic_analysis_while(pe,env,variables,cycle->cyc.while_cycle);
            break;
        case is_do_while_cycle:
            semantic_analysis_do_while(pe,env,variables,cycle->cyc.do_while);
            break;
    }
    
}


void semantic_analysis_for(prog_env *pe, environment_list *env,table_element *variables, is_for *for_cycle){
    
    
    environment_list *cycle = (environment_list*)malloc(sizeof(environment_list));
    
    cycle->father = env;
    
    environment_list *aux = env->local_environment;
    
    if(aux== NULL){
        env->local_environment = cycle;
    }
    else{
        for(;aux->next != NULL; aux = aux->next);
        aux->local_environment = cycle;
    }
    
    if(for_cycle->init->type == is_assign_for)
        semantic_analysis_assignment(pe,cycle,env->locals, for_cycle->init->init.assign);
    else
        cycle->locals = semantic_analysis_declaration(pe,cycle,cycle->locals,LOCAL,for_cycle->init->init.dec);
    
    semantic_analysis_if_expression(pe,cycle,for_cycle->if_expression,for_cycle->init->init.dec->line);
    
    semantic_analysis_increase_list(pe,cycle,for_cycle->increase);
    
    
    if(for_cycle->code->operation_list != NULL){
        semantic_analysis_operation_list(pe,cycle,for_cycle->code->operation_list);
    }
    else{
        semantic_analysis_operation(pe,cycle,for_cycle->code->operation);
    }
}


void semantic_analysis_if_expression(prog_env *pe, environment_list *env,is_if_expression *exp, int line){
    
    if(exp != NULL){
        unsignedVariableType typ = semantic_analysis_var_expression(pe,env,env->locals,is_void, exp->exp1,line);

        unsignedVariableType typ2 = semantic_analysis_var_expression(pe,env,env->locals,is_void, exp->exp2,line);

        if(typ != typ2){
            printf("%d - Incompatible type in condition clause\n",line);
        }
    }
    
}

void semantic_analysis_increase_list(prog_env *pe, environment_list *env, is_increase_list *list){
    
    is_increase_list *aux = list;
    if(aux){
       
        for(; aux != NULL; aux = aux->next){
            semantic_analysis_increase(pe,env,aux->inc);
        }
        
    }
    
}


void semantic_analysis_increase(prog_env *pe, environment_list *env, is_increase *inc){
    
    switch(inc->type){
        
        case is_assign_inc:
            semantic_analysis_assignment(pe,env,env->locals, inc->inc.assign);
            break;
        case is_unary_inc:
            semantic_analysis_unary(pe,env,env->locals,inc->inc.unary);
            break;
    }
    
}

void semantic_analysis_while(prog_env *pe, environment_list *env, table_element *variables, is_while *whil){
    
    environment_list *cycle = (environment_list*)malloc(sizeof(environment_list));
    
    cycle->father = env;
    
    environment_list *aux = env->local_environment;
    
    if(aux== NULL){
        env->local_environment = cycle;
    }
    else{
        for(;aux->next != NULL; aux = aux->next);
        aux->local_environment = cycle;
    }
    
    semantic_analysis_if_expression(pe,cycle,whil->if_expression,whil->if_expression->line);
    
    if(whil->code->operation_list != NULL){
        semantic_analysis_operation_list(pe,cycle,whil->code->operation_list);
    }
    else{
        semantic_analysis_operation(pe,cycle,whil->code->operation);
    }
    
}


void semantic_analysis_do_while(prog_env *pe, environment_list *env, table_element *variables, is_do_while *whil){
    
    environment_list *cycle = (environment_list*)malloc(sizeof(environment_list));
    
    cycle->father = env;
    
    environment_list *aux = env->local_environment;
    
    if(aux== NULL){
        env->local_environment = cycle;
    }
    else{
        for(;aux->next != NULL; aux = aux->next);
        aux->local_environment = cycle;
    }
    
    semantic_analysis_if_expression(pe,cycle,whil->if_expression,whil->if_expression->line);
    
    if(whil->code->operation_list != NULL){
        semantic_analysis_operation_list(pe,cycle,whil->code->operation_list);
    }
    else{
        semantic_analysis_operation(pe,cycle,whil->code->operation);
    }
    
}