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


prog_env* semantic_analysis(is_program *prog){
	prog_env* pe = (prog_env*)malloc(sizeof(prog_env));

	semantic_analysis_global_variables(pe,prog->variable_list);
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
	pe->global = semantic_analysis_declaration(pe,pe->global,GLOBAL,dec->declaration);

}

table_element* semantic_analysis_declaration(prog_env* pe, table_element *variables,globalType type, is_declaration *declaration){


	return semantic_analysis_variable_list(pe,variables,type,declaration->type,declaration->variable_list);

}

table_element* semantic_analysis_variable_list(prog_env *pe,table_element *variables,globalType typ,unsignedVariableType type, is_variable_list *variable_list){

	is_variable_list *aux = variable_list;

	if(aux){
	
		for(; aux!=NULL; aux=aux->next){
			variables = semantic_analysis_variable(pe,variables,typ,type,aux->variable);
		}
	}

	return variables;

}

table_element* semantic_analysis_variable(prog_env *pe, table_element *variables, globalType typ, unsignedVariableType type, is_variable *variable){

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

	return insertVariable(pe,variables,variable->line,variable->id,element,typ);
}


table_element* insertVariable(prog_env* pe,table_element * variables,int line, char *name, table_element *el, globalType type){

	table_element *aux = lookupElement(pe->global,name);

	if(aux != NULL && type == GLOBAL){
		printf("%d: variable with name %s already declared!\n",line,name);
		errors++;	
	}
	else{
		if(pe->global == NULL)
			aux = el;
		else{
			for(aux=variables; aux->next!= NULL;aux = aux->next);
			aux->next = el;	
		}
	}
	
	return variables;
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
		printf(" function with name %s already declared!\n",function->id);
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
                
                semantic_analysis_operation_list(pe,env,function->code->operation_list);
	}
}

void semantic_analysis_operation_list(prog_env *pe,environment_list *env,is_operation_list *list){

	is_operation_list *aux = list;

	if(aux){
	
		for(; aux!=NULL; aux=aux->next){
			semantic_analysis_operation(list->operation);
		}
	}



}


void semantic_analysis_operation(is_operation *operation){
    
    
    switch(operation->type){
        
        case is_dec:
            
            break;
        case is_assign:
            break;
        case is_funct:
            break;
        case is_un:
            break;
        case is_cyc:
            break;
        case is_cond:
            break;
        case is_cont:
            break;
    }



}

