#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantics.h"
#include "structures.h"
#include "symbol_table.h"

int errors = 0,global_offset = 0,local_offset = 0, return_found, global_variable = 0;
int counterif = 0;

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
	environment_list *aux = list;
	for(; aux != NULL; aux=aux->next){
		if(strcmp(aux->name, str)==0){
			return aux;
                }
        }

	return NULL;
}


table_element* searchVar(environment_list *env,table_element *global, table_element *local, char *name){
    
    table_element *aux = lookupElement(local,name);    
    if(!aux && env){
        environment_list *auxiliar = env->father;
        while(auxiliar != NULL){
            aux = lookupElement(auxiliar->locals,name);
            if(!aux)
                auxiliar = auxiliar->father;
            else
                return aux;
        }                
        aux = lookupElement(global,name);
        if(aux){
            global_variable = 1;
        }
    }

    return aux;
}


prog_env* semantic_analysis(is_program *prog, int *erros){
	prog_env* pe = (prog_env*)malloc(sizeof(prog_env));

	semantic_analysis_global_variables(pe,prog->variable_list);
        semantic_analysis_function_list(pe,prog->function_list);
	semantic_analysis_main(pe,prog->main);

        *erros = errors;
	
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
			variables = semantic_analysis_variable(pe,env,variables,typ,type,aux->variable,0);
		}
	}

	return variables;

}

table_element* semantic_analysis_variable(prog_env *pe,environment_list *env, table_element *variables, globalType typ, unsignedVariableType type, is_variable *variable, int init){

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
                semantic_analysis_var_expression(pe,env,variables,type,variable->expression,variable->line,1);
                element->initialized = 1;
        }
        if(init){
            element->initialized = 1;
        }

	return insertVariable(pe,env,variables,variable->line,variable->id,element,typ);
}


table_element* insertVariable(prog_env* pe, environment_list *env,table_element * variables,int line, char *name, table_element *el, globalType type){
    

    /*table_element *aux = lookupElement(variables,name);*/
    table_element *aux = searchVar(env,pe->global,variables,name);

    if(aux != NULL){
        if(type == GLOBAL){
            printf("%d - global variable with name %s already declared!\n",line,name);
            errors++;
            free(el);
            return variables;
        }
        else{
            if(global_variable == 1){
                global_variable = 0;
            }
            else{
                printf("%d - local variable with name %s already declared!\n",line,name);
                errors++;
                free(el);
                return variables;
            }
        }
    }
    if(variables == NULL){
        variables = el;
    }
    else{
        for(aux=variables; aux->next!= NULL;aux = aux->next);
        aux->next = el;	
    }

    return variables;
    
}


unsignedVariableType semantic_analysis_var_expression(prog_env *pe,environment_list *env, table_element *variables, unsignedVariableType type, is_expression *expression, int line, int analysis){
    
    
    switch(expression->type){
        
        case is_val:
            return semantic_analysis_value(pe,env,variables,type,expression->exp.value,line,analysis);
            break;
        case is_infix:
            ;
            unsignedVariableType typ = semantic_analysis_var_expression(pe,env,variables,type,expression->exp.infix->exp1,line,analysis);
            unsignedVariableType typ2 = semantic_analysis_var_expression(pe,env,variables,type,expression->exp.infix->exp2,line,analysis);
            if(typ != typ2){
                printf("%d - Type mismatch: infix expression with incompatible types\n",line);
                errors++;
            }
            if(typ == is_boolean && typ2 == is_boolean){
                printf("%d - Infix operation is undefined for type boolean\n",line);
                errors++;
            }
            break;
        case is_funct_call:
            return semantic_analysis_function_call(pe,env,variables,type,expression->exp.function,1);
            break;
        case is_exp:
            return semantic_analysis_var_expression(pe,env,variables,type,expression->exp.expression,line,analysis);
            break;
        /*case is_if_exp:
            semantic_analysis_if_expression(pe,env,expression->exp.if_expression,line);
            break;*/ 
    }
    
}

void semantic_analysis_if_expression(prog_env *pe, environment_list *env,is_if_expression *exp, int line){
    
    if(exp != NULL){
        if(exp->type != is_iden){
            unsignedVariableType typ = semantic_analysis_var_expression(pe,env,env->locals,is_void, exp->exp1,line,0);

            unsignedVariableType typ2 = semantic_analysis_var_expression(pe,env,env->locals,is_void, exp->exp2,line,0);

            if(typ != typ2 && exp->type != is_OP_LOR && exp->type != is_OP_LAND){
                printf("%d - Incompatible type in condition clause\n",line);
            }
        }
        else{
            
            semantic_analysis_value(pe,env,env->locals,is_void, exp->val,line,0);
            
            
        }
    }
    
}



unsignedVariableType semantic_analysis_value(prog_env *pe,environment_list *env, table_element *variables,unsignedVariableType type, is_value *value, int line, int analysis){
    
    if(value->type == is_ident){
        
        char *id = value->valueType._string;
        table_element *aux = searchVar(env,pe->global,variables,id);
        
        if(!aux){
            printf("%d - %s cannot be resolved\n",line,id);
            errors++;
            return is_void;
        }
        else{
            if(!aux->initialized){
                printf("%d - The variable with name %s may not have been initialized\n", line, id);
                errors++;
            }
        }
        
        if(aux->type != type && analysis){
            printf("%d - Type mismatch: assignment with incompatible types\n",line);
            errors++;
        }
        return aux->type;
        
    }
    else{
        if(value->type != type && analysis){
            printf("%d - Type mismatch: assignment with incompatible types\n",line);
            errors++;
        }
        return value->type;
    }
    
    
    
}

unsignedVariableType semantic_analysis_function_call(prog_env *pe,environment_list *father, table_element *variables,unsignedVariableType type, is_function_call *call, int exp){
    
    char *id = call->id;
    int line = call->line;
    environment_list *env = lookupEnvironment(pe->procs,id);
    
    if(env == NULL){
        printf("%d - The method %s() is undefined \n", line,id);
        errors++;
        return is_void;
    }
    else{        
        if(type != env->returnType && exp){
            printf("%d - Type mismatch: assignment with incompatible types\n",line);
            errors++;
        }
        
        semantic_analysis_parameters(pe,father,variables,env,call->parameter_list,line);
        
        return env->returnType;
    }    
    
}

void semantic_analysis_parameters(prog_env *pe,environment_list *father, table_element *variables, environment_list *env, is_parameter_list *list, int line){
    
    is_parameter_list *aux = list;
    is_argument_list *args = env->argument_list;
    
    if(aux){
        for(; aux!= NULL && args != NULL ; aux = aux->next, args = args->next){
            
            semantic_analysis_var_expression(pe,father,variables,args->argument->type,aux->expression,line,1);
            
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
        
        char *c = (char*)malloc(sizeof(char));
        strcpy(c,"Main\0");
        
	function->id = c;
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
                env->type = func;
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
                if(function->code->operation_list != NULL)
                        semantic_analysis_operation_list(pe,env,function->code->operation_list);
	}
}


void semantic_analysis_argument_list(prog_env *pe, environment_list *env){
    is_argument_list *aux = env->argument_list;
    for(;aux != NULL;aux = aux->next){
        
        is_variable *var = (is_variable*)malloc(sizeof(is_variable));
        
        var->id = aux->argument->id;
        var->expression = NULL;
        
        env->locals = semantic_analysis_variable(pe, env,env->locals, LOCAL, aux->argument->type,var,1);       
    
    }
    
}

void semantic_analysis_operation_list(prog_env *pe,environment_list *env,is_operation_list *list){

	is_operation_list *aux = list;

	if(aux){
            int i= 0;
            for(; aux!=NULL; aux=aux->next){
                return_found = 0;
                semantic_analysis_operation(pe,env,aux->operation);
                
            }
            if(env->returnType != is_void && !return_found && env->father == NULL){
                printf("The method %s must return a value\n", env->name);
                return_found = 0;
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
        case is_cond:
            semantic_analysis_condition(pe,env,env->locals,operation->oper.condition);
            break;
        case is_cont:
            semantic_analysis_control(pe,env,env->locals,operation->oper.control);
            return_found = 1;
            break;
    }



}

void semantic_analysis_assignment(prog_env *pe,environment_list *env, table_element *variables,is_assignment *assignment){
    
    table_element *aux = searchVar(env,pe->global,variables,assignment->id);
    unsignedVariableType tipo;
    if(!aux){
        printf("%d - %s cannot be resolved\n",assignment->line,assignment->id);
        errors++;
        tipo = is_void;
        return;
    }
    else{
         tipo = aux->type;
         if(assignment->type != is_ASS_EQ && aux->initialized == 0){
             printf("%d - The variable with name %s may not have been initialized\n",assignment->line, assignment->id );
             errors++;
         }
         aux->initialized = 1;
    }
    
    if(aux->type == is_boolean && assignment->type != is_ASS_EQ){
        printf("%d - This operator is undefined for the boolean type\n",assignment->line);
        errors++;
    }
    semantic_analysis_var_expression(pe,env,variables,tipo,assignment->expression,assignment->line,1);
    
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
        if(aux->type == is_string || aux->type == is_char || aux->type == is_boolean){
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
    cycle->name = cycle->father->name;
    cycle->child_id = counterif++;
    cycle->type = loop_for;
    environment_list *aux = env->local_environment;
    
    if(aux== NULL){
        env->local_environment = cycle;
    }
    else{
        for(;aux->next != NULL; aux = aux->next);
        aux->next = cycle;
    }
    
    if(for_cycle->init->type == is_assign_for)
        semantic_analysis_assignment(pe,cycle,env->locals, for_cycle->init->init.assign);
    else
        cycle->locals = semantic_analysis_declaration(pe,cycle,cycle->locals,LOCAL,for_cycle->init->init.dec);
    /*semantic_analysis_var_expression(pe,cycle,cycle->locals,is_void,for_cycle->if_expression,for_cycle->if_expression->line,1);**/
    semantic_analysis_if_expression(pe,cycle,for_cycle->if_expression,for_cycle->if_expression->line);
    
    semantic_analysis_increase_list(pe,cycle,for_cycle->increase);
    
    
    if(for_cycle->code->operation_list != NULL){
        semantic_analysis_operation_list(pe,cycle,for_cycle->code->operation_list);
    }
    else{
        semantic_analysis_operation(pe,cycle,for_cycle->code->operation);
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
    cycle->name = cycle->father->name;
    cycle->child_id = counterif++;
    cycle->type = loop_while;
    
    environment_list *aux = env->local_environment;
    
    if(aux== NULL){
        env->local_environment = cycle;
    }
    else{
        for(;aux->next != NULL; aux = aux->next);
        aux->next = cycle;
    }
    
    /*semantic_analysis_var_expression(pe,cycle,cycle->locals,is_void,whil->if_expression,whil->if_expression->line,1);**/
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
    cycle->name = cycle->father->name;
    cycle->child_id = counterif++;
    cycle->type = loop_do;
    environment_list *aux = env->local_environment;
    
    if(aux== NULL){
        env->local_environment = cycle;
    }
    else{
        for(;aux->next != NULL; aux = aux->next);
        aux->next = cycle;
    }
    
    /*semantic_analysis_var_expression(pe,cycle,cycle->locals,is_void,whil->if_expression,whil->if_expression->line,1);**/
    semantic_analysis_if_expression(pe,cycle,whil->if_expression,whil->if_expression->line);
    
    
    if(whil->code->operation_list != NULL){
        semantic_analysis_operation_list(pe,cycle,whil->code->operation_list);
    }
    else{
        semantic_analysis_operation(pe,cycle,whil->code->operation);
    }
    
}


void semantic_analysis_condition(prog_env *pe,environment_list *env, table_element *variables, is_condition_statement *cond){

    switch(cond->type){
        
        case is_if_statement:
            semantic_analysis_if(pe,env,variables,cond->stat.if_statement);
            break;
        case is_if_else_statement:
            semantic_analysis_if_else(pe,env,variables,cond->stat.if_else_statement);
            break;
        case is_switch_statement:
            semantic_analysis_switch(pe,env,variables,cond->stat.switch_statement);
            break;
    }
}


void semantic_analysis_if(prog_env *pe,environment_list *env, table_element *variables, is_if *stat){
    
    environment_list *cond = (environment_list*)malloc(sizeof(environment_list));
    
    cond->father = env;
    cond->name = cond->father->name;
    cond->returnType = env->returnType;
    cond->child_id = counterif++;
    cond->type = if_else;
    environment_list *aux = env->local_environment;
    if(aux == NULL){
        env->local_environment = cond;
    }
    else{
        for(;aux->next != NULL; aux = aux->next);
        aux->next = cond;
    }
    
    /*semantic_analysis_var_expression(pe,cond,cond->locals,is_void,stat->expression,stat->expression->line,0);*/
    semantic_analysis_if_expression(pe,env,stat->expression,stat->expression->line);
    
    if(stat->code->operation_list != NULL){
        semantic_analysis_operation_list(pe,cond,stat->code->operation_list);
    }
    else{
        semantic_analysis_operation(pe,cond,stat->code->operation);
    }
    
    
}

void semantic_analysis_if_else(prog_env *pe,environment_list *env, table_element *variables, is_if_else *stat){
    
    environment_list *cond = (environment_list*)malloc(sizeof(environment_list));
    
    cond->father = env;
    cond->name = cond->father->name;
    cond->returnType = env->returnType;
    cond->child_id = counterif++;
    cond->type = if_else;
    environment_list *aux = env->local_environment;
    
    if(aux== NULL){
        env->local_environment = cond;
    }
    else{
        for(;aux->next != NULL; aux = aux->next);
        aux->next = cond;
    }
    
    /*semantic_analysis_var_expression(pe,cond,cond->locals,is_void,stat->expression,stat->expression->line,0);*/
    
    semantic_analysis_if_expression(pe,env,stat->expression,stat->expression->line);
    
    if(stat->if_code->operation_list != NULL){
        semantic_analysis_operation_list(pe,cond,stat->if_code->operation_list);
    }
    else{
        semantic_analysis_operation(pe,cond,stat->if_code->operation);
    }
    
    if(stat->else_code->operation_list != NULL){
        semantic_analysis_operation_list(pe,env,stat->else_code->operation_list);
    }
    else{
        semantic_analysis_operation(pe,env,stat->else_code->operation);
    }
}


void semantic_analysis_switch(prog_env *pe,environment_list *env, table_element *variables, is_switch *sw){
    
    environment_list *cond = (environment_list*)malloc(sizeof(environment_list));
    
    cond->father = env;
    cond->name = cond->father->name;
    cond->returnType = env->returnType;
    cond->child_id = counterif++;
    cond->type = if_switch;
    environment_list *aux = env->local_environment;
    
    if(aux== NULL){
        env->local_environment = cond;
    }
    else{
        for(;aux->next != NULL; aux = aux->next);
        aux->next = cond;
    }
    
    semantic_analysis_var_expression(pe,cond,cond->locals,is_void,sw->expression,sw->expression->line,0);
    
    is_switch_case *cases = sw->cases;
    
    for(;cases != NULL; cases = cases->next){
        
        semantic_analysis_case(pe,cond,variables,cases);
            
    }
    
}


void semantic_analysis_case(prog_env *pe,environment_list *env, table_element *variables, is_switch_case *cases){
    
    if(cases->type == is_NORMAL)
        semantic_analysis_case_value(pe,env,variables,cases->value,cases->line);
    
    if(cases->operation_list != NULL)
        semantic_analysis_operation_list(pe,env,cases->operation_list);
    
}


void semantic_analysis_case_value(prog_env *pe,environment_list *env, table_element *variables, is_value *value,int line){
    
    if(value->type == is_ident){
        printf("%d - Case expressions must only contain constant expressions\n",line);
        errors++;
    }
    
}

int breakable(environment_list *env){
    
    environment_list *aux = env;
    
    while(aux != NULL){
        if(aux->type == loop_for || aux->type == loop_while || aux->type == loop_do || aux->type == if_switch){
            return 1;
        }
        aux = aux->father;
    }
    return 0;
}

int withinCycle(environment_list *env){
    
    environment_list *aux = env;
    
    while(aux != NULL){
        if(aux->type == loop_for || aux->type == loop_while || aux->type == loop_do){
            return 1;
        }
        aux = aux->father;
    }
    return 0;
}

void semantic_analysis_control(prog_env *pe,environment_list *env, table_element *variables, is_control *control){
    
    switch(control->type){
        
        case is_break:
            if(!breakable(env)){
                printf("%d - break cannot be used outside loop or switch\n", control->line);
                errors++;
            }
            break;
        case is_continue:
            if(!withinCycle(env)){
                printf("%d - continue cannot be used outside loop\n", control->line);
                errors++;
            }
            break;
        case is_return:
            if(env->returnType != is_void){
                printf("%d - This method must return a result\n",control->line);
                errors++;
            }
            break;
        case is_return_exp:
            ;
            unsignedVariableType typ = semantic_analysis_var_expression(pe,env,env->locals,env->returnType,control->expression,control->line,0);
            if(typ != env->returnType){
                printf("%d - Type mismatch - incorrect return type\n",control->line);
                errors++;
            }
            break;
        case is_println:
            semantic_analysis_var_expression(pe,env,env->locals,env->returnType,control->expression,control->line,0);
            break;
        case is_print:
            semantic_analysis_var_expression(pe,env,env->locals,env->returnType,control->expression,control->line,0);
            break;
    }
    
}