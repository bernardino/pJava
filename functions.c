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

is_code* insert_code( is_operation_list *operation_list){
	
	is_code *code = (is_code*)malloc(sizeof(is_code));
	code->operation_list = operation_list;

	return code;
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

is_function_call* insert_function_call(char *id, is_parameter_list *param){
	
	is_function_call *function_call = (is_function_call*)malloc(sizeof(is_function_call));
	function_call->id = id;
	function_call->parameter_list = param;
	
	return function_call;

}

is_function* insert_function(scopeType sT, unsignedVariableType uT, char *id, is_argument_list *list, is_code *code){

	is_function *func = (is_function*)malloc(sizeof(is_function));
	func->scopeType = sT;
	func->returnType = uT;
	func->id = id;
	func->argument_list = list;
	func->code = code;	

	return func;

}


is_parameter_list* insert_parameter_list(is_parameter_list* list, is_expression *exp){

	is_parameter_list *parameter_list = (is_parameter_list*)malloc(sizeof(is_parameter_list));
	parameter_list->expression= exp;
	parameter_list->next = NULL;
	
	if(!list)
		return parameter_list;
	
	is_parameter_list *aux = list;

	while(aux->next!=NULL)
		aux=aux->next;

	aux->next = parameter_list;
	return list;

}

is_argument_list* insert_argument_list(is_argument_list *list, is_argument *arg){

	is_argument_list *argument_list = (is_argument_list*)malloc(sizeof(is_argument_list));
	argument_list->argument= arg;
	argument_list->next = NULL;
	
	if(!list)
		return argument_list;
	
	is_argument_list *aux = list;

	while(aux->next!=NULL)
		aux=aux->next;

	aux->next = argument_list;
	return list;

}
is_argument* insert_argument(unsignedVariableType type, char *id){

	is_argument *argument = (is_argument*)malloc(sizeof(is_argument));
	argument->type = type;
	argument->id = id;

	return argument;
}

is_operation_list* insert_operation_list(is_operation_list* list, is_operation* op){

	is_operation_list *operation_list = (is_operation_list*)malloc(sizeof(is_operation_list));
	operation_list->operation = op;
	operation_list->next = NULL;

	if(!list)
		return operation_list;

	is_operation_list *aux = list;

	while(aux->next!=NULL)
		aux=aux->next;

	aux->next = operation_list;
	return list;
}

is_operation* insert_operation_dec(is_declaration* dec){
	
	is_operation *operation = (is_operation*)malloc(sizeof(is_operation));
	operation->type = is_dec;
	operation->oper.declaration = dec;

	return operation;
}

is_operation* insert_operation_assign(is_assignment *assign){

	is_operation *operation = (is_operation*)malloc(sizeof(is_operation));
	operation->type = is_assign;
	operation->oper.assignment = assign;

	return operation;
}

is_operation* insert_operation_unary(is_unary *unary){

	is_operation *operation = (is_operation*)malloc(sizeof(is_operation));
	operation->type = is_un;
	operation->oper.unary = unary;

	return operation;
}

is_declaration* insert_declaration(unsignedVariableType type, is_variable_list* var_list){

	is_declaration *declaration = (is_declaration*)malloc(sizeof(is_declaration));
	declaration->type = type;
	declaration->variable_list = var_list;

	return declaration;
}

is_assignment *insert_assignment(char *id, assignmentType type, is_expression* exp){

	is_assignment *assign = (is_assignment*)malloc(sizeof(is_assignment));
	assign->id = id;
	assign->type = type;
	assign->expression = exp;

	return assign;
}

is_unary* insert_unary(char *id, unaryType type){

	is_unary *unary = (is_unary*)malloc(sizeof(is_unary));
	unary->id = id;
	unary->type = type;
	
	return unary;
}


/* INSERT EXPRESSIONS */
is_expression* insert_expression_value( is_value *val){
	
	is_expression *express = (is_expression*)malloc(sizeof(is_expression));
	express->type = is_val;
	express->exp.value = val;

	return express;
}

is_expression* insert_expression_func( is_function_call *call){
	
	is_expression *express = (is_expression*)malloc(sizeof(is_expression));
	express->type = is_funct_call;
	express->exp.function = call;

	return express;
}

is_expression* insert_expression_infix(is_infix_expression* infix){

	is_expression *express = (is_expression*)malloc(sizeof(is_expression));
	express->type = is_infix;
	express->exp.infix = infix;

	return express;
}

is_expression* insert_expression( is_expression *exp){
	
	is_expression *express = (is_expression*)malloc(sizeof(is_expression));
	express->type = is_exp;
	express->exp.expression = exp;

	return express;
	
}

is_infix_expression* insert_infix( is_expression* exp1, infixType type, is_expression *exp2){

	is_infix_expression *infix = (is_infix_expression*)malloc(sizeof(is_infix_expression));

	infix->exp1 = exp1;
	infix->oper = type;
	infix->exp2 = exp2;

	return infix;
}
is_variable_list* insert_variable_list(is_variable_list *list, is_variable* var){
	
	is_variable_list *variable_list = (is_variable_list*)malloc(sizeof(is_variable_list));
	variable_list->variable= var;
	variable_list->next = NULL;
	
	if(!list)
		return variable_list;
	
	is_variable_list *aux = list;

	while(aux->next!=NULL)
		aux=aux->next;

	aux->next = variable_list;
	return list;
	
}

is_variable* insert_variable(identiferType type, char *id, is_value* val){
	
	/* Arrays are still not working */

	is_variable *var = (is_variable*)malloc(sizeof(is_variable));
	var->id = id;
	var->value = val;

	return var;	

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


