#include <stdlib.h>
#include "structures.h"
#include "functions.h"

 
is_program* insert_program( char *id, is_main *main, is_function_list *function_list, is_global_list *variable_list){
	
	is_program *program = (is_program*)malloc(sizeof(is_program));
	program->id = id;
	program->main = main;
	program->function_list = function_list;
	program->variable_list = variable_list;

	return program;	

}

is_global_list* insert_global_list(is_global_list *list, is_global_dec *dec){

	is_global_list *global_list = (is_global_list*)malloc(sizeof(is_global_list));
	global_list->dec= dec;
	global_list->next = NULL;
	
	if(!list)
		return global_list;
	
	is_global_list *aux = list;

	while(aux->next!=NULL)
		aux=aux->next;

	aux->next = global_list;
	return list;


}

is_global_dec* insert_global_declaration(scopeType tp, is_declaration *declaration, int line){

	is_global_dec *dec = (is_global_dec*)malloc(sizeof(is_global_dec));

	dec->tp = tp;
	dec->declaration = declaration;

	return dec;
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

is_function_call* insert_function_call(char *id, is_parameter_list *param, int line){
	
	is_function_call *function_call = (is_function_call*)malloc(sizeof(is_function_call));
	function_call->id = id;
	function_call->parameter_list = param;
	
	return function_call;

}

is_function* insert_function(scopeType sT, unsignedVariableType uT, char *id, is_argument_list *list, is_code *code, int line){

	is_function *func = (is_function*)malloc(sizeof(is_function));
	func->scope_type = sT;
	func->return_type = uT;
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

is_operation* insert_operation_if(is_condition_statement *condition){

	is_operation *operation = (is_operation*)malloc(sizeof(is_operation));
	operation->type = is_cond;
	operation->oper.condition = condition;

	return operation;
}

is_operation* insert_operation_cycle(is_cycle *cycle){

	is_operation *operation = (is_operation*)malloc(sizeof(is_operation));
	operation->type = is_cyc;
	operation->oper.cycle = cycle;

	return operation;
}

is_operation* insert_operation_control(is_control* control){

	is_operation *operation = (is_operation*)malloc(sizeof(is_operation));
	operation->type = is_cont;
	operation->oper.control = control;

	return operation;

}

is_operation* insert_operation_function(is_function_call* call){
	
	is_operation *operation = (is_operation*)malloc(sizeof(is_operation));
	operation->type = is_funct;
	operation->oper.function = call;
	
	return operation;
	
}

is_declaration* insert_declaration(unsignedVariableType type, is_variable_list* var_list, int line){

	is_declaration *declaration = (is_declaration*)malloc(sizeof(is_declaration));
	declaration->type = type;
	declaration->variable_list = var_list;

	return declaration;
}

is_assignment *insert_assignment(char *id, assignmentType type, is_expression* exp, int line){

	is_assignment *assign = (is_assignment*)malloc(sizeof(is_assignment));
	assign->id = id;
	assign->type = type;
	assign->expression = exp;

	return assign;
}

is_unary* insert_unary(char *id, unaryType type, int line){

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

is_expression* insert_expression_if(is_if_expression *if_expression){
	
	is_expression *express = (is_expression*)malloc(sizeof(is_expression));
	express->type = is_if_exp;
	express->exp.if_expression = if_expression;

	return express;

}

is_infix_expression* insert_infix( is_expression* exp1, infixType type, is_expression *exp2){

	is_infix_expression *infix = (is_infix_expression*)malloc(sizeof(is_infix_expression));

	infix->exp1 = exp1;
	infix->oper = type;
	infix->exp2 = exp2;

	return infix;
}

is_if_expression* insert_if(is_expression *exp1, if_exp_type type, is_expression *exp2){

	is_if_expression *if_expression = (is_if_expression*)malloc(sizeof(is_if_expression));

	if_expression->exp1 = exp1;
	if_expression->type = type;
	if_expression->exp2 = exp2;

	return if_expression;
}

is_control* insert_control(controlType type, is_expression *exp, int line){

	is_control *control = (is_control*)malloc(sizeof(is_control));
	
	control->type = type;
	control->expression = exp;

	return control;
}

is_switch_case* insert_switch_case(switchType type, is_value *val, is_operation_list *operation_list, is_switch_case *next){

	is_switch_case *sw = (is_switch_case*)malloc(sizeof(is_switch_case));
	
	sw->type = type;
	sw->value = val;
	sw->operation_list = operation_list;
	sw->next = next;

	return sw;
}

/* insert conditions */
is_condition_statement* insert_if_statement(is_expression *expression,is_condition_code *code, int line){

	is_if *statement = (is_if*)malloc(sizeof(is_if));
	statement->expression = expression;
	statement->code = code;

	is_condition_statement  *stat = (is_condition_statement*)malloc(sizeof(is_condition_statement));
	stat->type = is_if_statement;
	stat->stat.if_statement = statement;

	return stat;
}

is_condition_statement* insert_if_else_statement(is_expression *expression,is_condition_code *if_code, is_condition_code *else_code, int line){

	is_if_else *statement = (is_if_else*)malloc(sizeof(is_if_else));

	statement->expression = expression;
	statement->if_code = if_code;
	statement->else_code = else_code;

	is_condition_statement  *stat = (is_condition_statement*)malloc(sizeof(is_condition_statement));
	stat->type = is_if_else_statement;
	stat->stat.if_else_statement = statement;

	return stat;
}

is_condition_statement* insert_switch_statement(is_expression *expression, is_switch_case *switch_case, int line){

	is_switch *sw = (is_switch*)malloc(sizeof(is_switch));
	sw->expression = expression;
	sw->cases = switch_case;

	is_condition_statement  *stat = (is_condition_statement*)malloc(sizeof(is_condition_statement));
	stat->type = is_switch_statement;
	stat->stat.switch_statement = sw;

	return stat;

}

is_condition_code* insert_condition_code(is_operation_list *operation_list, is_operation *operation){

	is_condition_code *code = (is_condition_code*)malloc(sizeof(is_condition_code));

	code->operation_list = operation_list;
	code->operation = operation;

	return code;

}

/* insert cycles */
is_cycle* insert_for(is_assignment *assign, is_if_expression *if_expression, is_increase_list *inc, is_condition_code *code, int line){

	is_for *for_cyc = (is_for*)malloc(sizeof(is_for));

	for_cyc->assignment = assign;
	for_cyc->if_expression = if_expression;
	for_cyc->increase = inc;
	for_cyc->code = code;

	is_cycle *cycle = (is_cycle*)malloc(sizeof(is_cycle));

	cycle->type = is_for_cycle;
	cycle->cyc.for_cycle = for_cyc;

	return cycle;
}

is_cycle* insert_while(is_if_expression *if_expression, is_condition_code *code, int line){

	is_while *while_cyc = (is_while*)malloc(sizeof(is_while));

	while_cyc->if_expression = if_expression;
	while_cyc->code = code;

	is_cycle *cycle = (is_cycle*)malloc(sizeof(is_cycle));

	cycle->type = is_while_cycle;
	cycle->cyc.while_cycle = while_cyc;

	return cycle;
}

is_cycle* insert_do_while(is_condition_code *code, is_if_expression *if_expression, int line){

	is_do_while *do_while = (is_do_while*)malloc(sizeof(is_do_while));

	do_while->code = code;
	do_while->if_expression = if_expression;

	is_cycle *cycle = (is_cycle*)malloc(sizeof(is_cycle));

	cycle->type = is_do_while_cycle;
	cycle->cyc.do_while = do_while;

	return cycle;
}

is_increase* insert_assign_inc(is_assignment *assign){

	is_increase *inc = (is_increase*)malloc(sizeof(is_increase));

	inc->type = is_assign_inc;
	inc->inc.assign = assign;

	return inc;
}

is_increase* insert_unary_inc(is_unary *unary){

	is_increase *inc = (is_increase*)malloc(sizeof(is_increase));

	inc->type = is_unary_inc;
	inc->inc.unary = unary;

	return inc;

}

is_increase_list* insert_increase_list(is_increase_list *inc_list, is_increase *inc){

	is_increase_list *increase_list = (is_increase_list*)malloc(sizeof(is_increase_list));
	increase_list->inc= inc;
	increase_list->next = NULL;
	
	if(!inc_list)
		return increase_list;
	
	is_increase_list *aux = inc_list;

	while(aux->next!=NULL)
		aux=aux->next;

	aux->next = increase_list;
	return inc_list;


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

is_variable* insert_variable(identiferType type, char *id, is_expression* exp){
	
	/* Arrays are still not working */

	is_variable *var = (is_variable*)malloc(sizeof(is_variable));
	var->id = id;
	var->expression = exp;

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


