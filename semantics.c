#include <stdio.h>
#include <stdlib.h>
#include "shows.h"
#include "structures.h"

void check_program(is_program *program){

	printf("Program name %s \n", program->id);
	check_main(program->main);
	check_function_list(program->function_list);

}

void check_main(is_main *main){

	printf("Main( )");
	check_code(main->code);
	/* TODO argument list */
	check_argument_list(main->argument_list);
}

void check_code(is_code *code){

	if(code)
		check_operation_list(code->operation_list);
	printf("\n");

}

void check_function_list(is_function_list *function_list){

	if(function_list){
		is_function_list *aux;
		for(aux = function_list; aux != NULL ; aux = aux->next)
			check_function(aux->function);

	}
	
}

void check_function(is_function *function){
	
	check_scope(function->scope_type);
	check_type(function->return_type);
	printf(" %s ",function->id);
	check_argument_list(function->argument_list);
	check_code(function->code);

}


void check_scope(scopeType type){

	if(type == is_public)
		printf("public ");
	else if(type == is_private)
		printf("private ");
	else if(type == is_protected)
		printf("protected ");
}


void check_type(unsignedVariableType type){

	if(type == is_char)
		printf("char ");
	else if(type == is_int)
		printf("int ");
	else if(type == is_boolean)
		printf("boolean ");
	else if(type == is_double)
		printf("double ");
	else if(type == is_string)
		printf("String ");
	else if(type == is_void)
		printf("void ");

}

void check_argument_list(is_argument_list *list){

	if(list){
		is_argument_list *aux;
		printf("(");
		for(aux = list; aux != NULL ; aux = aux->next){
			check_argument(aux->argument);
			if(aux->next)
				printf(", ");
		}
		printf(")\n");			
	}


}

void check_argument(is_argument *arg){

	check_type(arg->type);
	printf("%s", arg->id);

}

void check_assignment(is_assignment *assignment) {
	printf("VAR %s ",assignment->id);
	switch (assignment->type) {
		case is_ASS_EQ:
			printf(" = ");
			check_expression(assignment->expression);
			break;
		case is_ASS_ADD:
			printf(" += ");
			check_expression(assignment->expression);
			break;
		case is_ASS_SUB:
			printf(" -= ");
			check_expression(assignment->expression);
			break;
		case is_ASS_MUL:
			printf(" *= ");
			check_expression(assignment->expression);
			break;
		case is_ASS_DIV:
			printf(" /= ");
			check_expression(assignment->expression);
			break;
		case is_ASS_AND:
			printf(" &= ");
			check_expression(assignment->expression);
			break;
		case is_ASS_PERC:
			printf(" %%= ");
			check_expression(assignment->expression);
			break;
		case is_ASS_LS:
			printf(" >>= ");
			check_expression(assignment->expression);
			break;
		case is_ASS_RS:
			printf(" <<= ");
			check_expression(assignment->expression);
			break;
	}
}

void check_unary_expression(is_unary *unary) {
	switch (unary->type) {
		case is_before_plus:
			printf(" (VAR ++%s ) ",unary->id);
			break;
		case is_before_minus:
			printf(" (VAR --%s ) ",unary->id);
			break;
		case is_after_plus:
			printf(" (VAR %s++ ) ",unary->id);
			break;
		case is_after_minus:
			printf(" (VAR %s-- ) ",unary->id);
			break;
	}
}

void check_control_statement(is_control *control) {
	switch (control->type) {
		case is_break:
			printf(" BREAK ");
			break;
		case is_continue:
			printf(" CONTINUE ");
			break;
		case is_return:
			printf(" RETURN ");
			break;
		case is_return_exp:
			printf(" RETURN ");
			check_expression(control->expression);
			break;
	}
}

void check_cycle(is_cycle *cycle) {
	switch (cycle->type) {
		case is_for_cycle:
			check_for_cycle(cycle->cyc.for_cycle);
			break;
		case is_while_cycle:
			check_while_cycle(cycle->cyc.while_cycle);
			break;
		case is_do_while_cycle:
			check_do_while_cycle(cycle->cyc.do_while);
			break;
	}
}


void check_for_cycle(is_for *for_cycle) {
	printf(" FOR ( ");
	check_assignment(for_cycle->assignment);
	printf(" ; ");
	check_if_expression(for_cycle->if_expression);
	printf(" ; ");
	check_increase_list(for_cycle->increase);
	printf(" ) { ");
	check_condition_code(for_cycle->code);
}


void check_while_cycle(is_while *while_cycle) {
	printf(" WHILE ( ");
	check_if_expression(while_cycle->if_expression);
	printf(" ) { ");
	check_condition_code(while_cycle->code);
	printf(" } ");
}


void check_do_while_cycle(is_do_while *do_while) {
	printf(" DO { ");
	check_condition_code(do_while->code);
	printf(" } WHILE ( ");
	check_if_expression(do_while->if_expression);
	printf(" ) ");
}


void check_increase_list(is_increase_list *increase) {
	if (increase) {
		is_increase_list *aux;
		for (aux = increase; aux != NULL; aux = aux->next ) {
			check_increase(aux->inc);
			if (aux->next) {
				printf(", ");
			}
		}
	}
}


void check_increase(is_increase *inc) {
	switch (inc->type) {
		case is_assign_inc:
			check_assignment(inc->inc.assign);
			break;
		case is_unary_inc:
			check_unary_expression(inc->inc.unary);
			break;

	}
}


void check_operation_list(is_operation_list *list){

	if(list){
		is_operation_list *aux;
		printf("{\n");
		for(aux = list; aux != NULL ; aux = aux->next){
			check_operation(aux->operation);
			if(aux->next)
				printf(";\n");
		}
		printf("}");
	}

}

void check_operation(is_operation *operation){

	switch(operation->type){
		case is_dec:
			printf("Declaration:");
			check_declaration((is_declaration*)operation->oper.declaration);
			break;
		case is_assign:
			printf("Assignment: ");
			check_assignment(operation->oper.assignment);
			break;
		case is_funct:
			printf("Function Call:");
			check_function_call(operation->oper.function);
			break;
		case is_un:
			printf("Unary: ");
			check_unary_expression(operation->oper.unary);
			break;
		case is_cyc:
			printf("Cycle: ");
			check_cycle(operation->oper.cycle);
			break;
		case is_cond:
			printf("Choice:");
			check_condition_statement(operation->oper.condition);
			break;
		case is_cont:
			printf("Control: ");
			check_control_statement(operation->oper.control);
			break;

	}

}

void check_declaration(is_declaration *dec){

	check_type(dec->type);
	check_variable_list(dec->variable_list);

}

void check_variable_list(is_variable_list *list){

	if(list){
		is_variable_list *aux;
		for(aux = list; aux != NULL ; aux = aux->next){
			check_variable(aux->variable);
			if(aux->next)
				printf(", ");
		}
		printf("\n");
	}
}

void check_variable(is_variable *var){

	printf("%s ",var->id);
	check_expression(var->expression);


}

void check_expression(is_expression *exp){
	
	switch(exp->type){
		case is_infix:
			check_infix(exp->exp.infix);
			break;
		case is_val:
			check_value(exp->exp.value);
			break;
		case is_funct_call:
			check_function_call(exp->exp.function);
			break;
		case is_exp:
			check_expression(exp->exp.expression);
			break;
		case is_if_exp:
			check_if_expression(exp->exp.if_expression);
			break;
	}

}

void check_infix(is_infix_expression *exp){
	
	printf("Infix Expression: ");
	check_expression(exp->exp1);
	check_infix_type(exp->oper);
	check_expression(exp->exp2);
	printf("\n");

}


void check_infix_type(infixType type){

	switch(type){
		case is_plus:
			printf(" + ");
			break;
		case is_minus:
			printf(" - ");
			break;
		case is_mult:
			printf(" * ");
			break;
		case is_div:
			printf(" / ");
			break;
		case is_and:
			printf(" & ");
			break;
		case is_percent:
			printf(" %% ");
			break;
		case is_lshift:
			printf(" << ");
			break;
		case is_rshift:
			printf(" >> ");
			break;
	}

}

void check_value(is_value *val){
	
	printf("Value  ");
	check_type(val->type);
	printf("( ");
	switch(val->type){
		case is_char:
			printf("%c ", val->valueType._char);
			break;
		case is_int:
			printf("%d ", val->valueType._int);
			break;
		case is_double:
			printf("%lf ", val->valueType._double);
			break;
		case is_string:
			printf("%s ",val->valueType._string);
			break;
		case is_boolean:
			printf("%d ", val->valueType._boolean);
			break;
	}
	printf(" )");	

}

void check_function_call(is_function_call *function){

	printf(" %s ( ",function->id);
	check_parameter_list(function->parameter_list);
	printf(" ) \n");
}

void check_parameter_list(is_parameter_list *list){

	if(list){
		is_parameter_list *aux;
		for(aux = list; aux != NULL ; aux = aux->next){
			check_expression(aux->expression);
			if(aux->next)
				printf(", ");
		}
		printf("\n");
	}

}

void check_condition_statement(is_condition_statement *condition) {
	switch (condition->type) {
		case is_if_statement:
			printf("IF( ");
			check_if_statement(condition->stat.if_statement);
			break;
		case is_if_else_statement:
			printf("IF( ");
			check_if_else_statement(condition->stat.if_else_statement);
			break;
		case is_switch_statement:
			printf("SWITCH( ");
			check_switch_statement(condition->stat.switch_statement);
			break;
	}
}

void check_if_statement(is_if *if_statement) {
	check_expression(if_statement->expression);
	printf(" ) { ");
	check_condition_code(if_statement->code);
	printf(" } ");
}

void check_if_expression(is_if_expression *exp){
	
	check_expression(exp->exp1);
	check_if_type(exp->type);
	check_expression(exp->exp2);

}

void check_if_type(if_exp_type type){
	switch(type){
		case is_OP_BIGGER:
			printf(" > ");
			break;
		case is_OP_LOWER:
			printf(" < ");
			break;
		case is_OP_EQ:
			printf(" == ");
			break;
		case is_OP_NE:
			printf(" != ");
			break;
		case is_OP_LE:
			printf(" <= ");
			break;
		case is_OP_GE:
			printf(" >= ");
			break;
		case is_OP_LOR:
			printf(" || ");
			break;
		case is_OP_LAND:
			printf(" && ");
			break;
	}
	
}

void check_condition_code(is_condition_code *code) {
	if (code->operation != NULL) {
		check_operation(code->operation);
	} else if (code->operation_list != NULL) {
		check_operation_list(code->operation_list);
	}
}

void check_if_else_statement(is_if_else *if_else_statement) {
	check_expression(if_else_statement->expression);
	printf(" ) { ");
	check_condition_code(if_else_statement->if_code);
	printf(" } ELSE {");
	check_condition_code(if_else_statement->else_code);
	printf(" } ");
}

void check_switch_statement(is_switch *switch_statement) {
	check_expression(switch_statement->expression);
	printf(" ) { ");
	check_switch_cases(switch_statement->cases);
	printf(" } ");
}

void check_switch_case(is_switch_case *a_case) {
	if (a_case->type == is_DEFAULT) {
		printf("DEFAULT: ");
		check_operation_list(a_case->operation_list);
	} else if(a_case->type == is_NORMAL) {
		printf("CASE ");
		check_value(a_case->value);
		printf(" : ");
		check_operation_list(a_case->operation_list);
	}
}

void check_switch_cases(is_switch_case *cases) {
	if(cases) {
		is_switch_case *aux;
		for (aux = cases; aux != NULL; aux = aux->next) {
			check_switch_case(aux);
			if(aux->next)
				printf(", ");
			printf("\n");
		}
	}
}
