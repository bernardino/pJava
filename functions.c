#include <stdlib.h>
#include "structures.h"
#include "functions.h"

 
is_program* insert_program( char *id, is_main *main, is_function_list *function_list){
	
	is_program *program = (is_program*)malloc(sizeof(is_program));
	program->id = id;
	program->main = main;
	program->function_list = function_list;

	return program;	

}

is_main* insert_main( is_code *code){

	is_main *main = (is_main*)malloc(sizeof(is_main));
	main->code = code;

	return main;
}

is_function_list* insert_function_list(is_function_list *list, is_function *f){

	is_function_list *function_list = (is_function_list*)malloc(sizeof(is_function_list));
	function_list->function= f;
	function_list->next = NULL;
	
	if(!list)
		return function_list;
	
	is_function_list *aux = list;

	while(aux->next!=NULL)
		aux=aux->next;

	aux->next = function_list;
	return list;
}

is_value* insert_int(unsignedVariableType type, int value){
	
	is_value *val = (is_value*)malloc(sizeof(is_value));
	
	val->type = type;
	val->valueType._int = (int)value;

	return val;
}

is_value* insert_char(unsignedVariableType type, char value){

	is_value *val = (is_value*)malloc(sizeof(is_value));
	
	val->type = type;
	val->valueType._char = (char)value;

	return val;
}

is_value* insert_string(unsignedVariableType type, char *value){
	is_value *val = (is_value*)malloc(sizeof(is_value));
	
	val->type = type;
	val->valueType._string = (char*)value;

	return val;
}

is_value* insert_boolean(unsignedVariableType type, int value){

	is_value *val = (is_value*)malloc(sizeof(is_value));
	
	val->type = type;
	val->valueType._int = (int)value;

	return val;

}

is_value* insert_double(unsignedVariableType type, double value){
	
	is_value *val = (is_value*)malloc(sizeof(is_value));
	
	val->type = type;
	val->valueType._double = (double)value;

	return val;
}

is_variable* insert_variable(unsignedVariableType type, char *id){
	

}



/*is_operation_list* insert_operation_list(){

	is_operation_list* operation_list=(is_operation_list*)malloc(sizeof(is_operation_list));

	return operation_list;
}*/

