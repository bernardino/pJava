#include <stdio.h>
#include <stdlib.h>
#include "shows.h"
#include "structures.h"

void show_program(is_program *program){

	printf("Program name %s \n", program->id);
	show_main(program->main);
	show_function_list(program->function_list);

}

void show_main(is_main *main){

	printf("Main( )");
	show_code(main->code);
	/* TODO argument list */
	show_argument_list(main->argument_list);
}

void show_code(is_code *code){

	if(code)
		show_operation_list(code->operation_list);
	printf("\n");

}

void show_function_list(is_function_list *function_list){

	if(function_list){
		is_function_list *aux;
		for(aux = function_list; aux != NULL ; aux = aux->next)
			show_function(aux->function);

	}
	
}

void show_function(is_function *function){
	
	show_scope(function->scope_type);
	show_type(function->return_type);
	printf(" %s ",function->id);
	show_argument_list(function->argument_list);
	show_code(function->code);

}


void show_scope(scopeType type){

	if(type == is_public)
		printf("public ");
	else if(type == is_private)
		printf("private ");
	else if(type == is_protected)
		printf("protected ");
}


void show_type(unsignedVariableType type){

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

void show_argument_list(is_argument_list *list){

	if(list){
		is_argument_list *aux;
		printf("(");
		for(aux = list; aux != NULL ; aux = aux->next){
			show_argument(aux->argument);
			if(aux->next)
				printf(", ");
		}
		printf(")\n");			
	}


}

void show_argument(is_argument *arg){

	show_type(arg->type);
	printf("%s", arg->id);

}

void show_assignment(is_assignment *assignment) {
	printf("VAR %s ",assignment->id);
	switch (assignment->type) {
		case is_ASS_EQ:
			printf(" = ");
			show_expression(assignment->expression);
			break;
		case is_ASS_ADD:
			printf(" += ");
			show_expression(assignment->expression);
			break;
		case is_ASS_SUB:
			printf(" -= ");
			show_expression(assignment->expression);
			break;
		case is_ASS_MUL:
			printf(" *= ");
			show_expression(assignment->expression);
			break;
		case is_ASS_DIV:
			printf(" /= ");
			show_expression(assignment->expression);
			break;
		case is_ASS_AND:
			printf(" &= ");
			show_expression(assignment->expression);
			break;
		case is_ASS_PERC:
			printf(" %%= ");
			show_expression(assignment->expression);
			break;
		case is_ASS_LS:
			printf(" >>= ");
			show_expression(assignment->expression);
			break;
		case is_ASS_RS:
			printf(" <<= ");
			show_expression(assignment->expression);
			break;
	}
}

void show_unary_expression(is_unary *unary) {
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

void show_control_statement(is_control *control) {
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
			show_expression(control->expression);
			break;
	}
}

void show_cycle(is_cycle *cycle) {
	switch (cycle->type) {
		case is_for_cycle:
			show_for_cycle(cycle->cyc.for_cycle);
			break;
		case is_while_cycle:
			show_while_cycle(cycle->cyc.while_cycle);
			break;
		case is_do_while_cycle:
			show_do_while_cycle(cycle->cyc.do_while);
			break;
	}
}


void show_for_cycle(is_for *for_cycle) {
	printf(" FOR ( ");
	show_assignment(for_cycle->assignment);
	printf(" ; ");
	show_if_expression(for_cycle->if_expression);
	printf(" ; ");
	show_increase_list(for_cycle->increase);
	printf(" ) { ");
	show_condition_code(for_cycle->code);
}


void show_while_cycle(is_while *while_cycle) {
	printf(" WHILE ( ");
	show_if_expression(while_cycle->if_expression);
	printf(" ) { ");
	show_condition_code(while_cycle->code);
	printf(" } ");
}


void show_do_while_cycle(is_do_while *do_while) {
	printf(" DO { ");
	show_condition_code(do_while->code);
	printf(" } WHILE ( ");
	show_if_expression(do_while->if_expression);
	printf(" ) ");
}


void show_increase_list(is_increase_list *increase) {
	if (increase) {
		is_increase_list *aux;
		for (aux = increase; aux != NULL; aux = aux->next ) {
			show_increase(aux->inc);
			if (aux->next) {
				printf(", ");
			}
		}
	}
}


void show_increase(is_increase *inc) {
	switch (inc->type) {
		case is_assign_inc:
			show_assignment(inc->inc.assign);
			break;
		case is_unary_inc:
			show_unary_expression(inc->inc.unary);
			break;

	}
}


void show_operation_list(is_operation_list *list){

	if(list){
		is_operation_list *aux;
		printf("{\n");
		for(aux = list; aux != NULL ; aux = aux->next){
			show_operation(aux->operation);
			if(aux->next)
				printf(";\n");
		}
		printf("}");
	}

}

void show_operation(is_operation *operation){

	switch(operation->type){
		case is_dec:
			printf("Declaration:");
			show_declaration((is_declaration*)operation->oper.declaration);
			break;
		case is_assign:
			printf("Assignment: ");
			show_assignment(operation->oper.assignment);
			break;
		case is_funct:
			printf("Function Call:");
			show_function_call(operation->oper.function);
			break;
		case is_un:
			printf("Unary: ");
			show_unary_expression(operation->oper.unary);
			break;
		case is_cyc:
			printf("Cycle: ");
			show_cycle(operation->oper.cycle);
			break;
		case is_cond:
			printf("Choice:");
			show_condition_statement(operation->oper.condition);
			break;
		case is_cont:
			printf("Control: ");
			show_control_statement(operation->oper.control);
			break;

	}

}

void show_declaration(is_declaration *dec){

	show_type(dec->type);
	show_variable_list(dec->variable_list);

}

void show_variable_list(is_variable_list *list){

	if(list){
		is_variable_list *aux;
		for(aux = list; aux != NULL ; aux = aux->next){
			show_variable(aux->variable);
			if(aux->next)
				printf(", ");
		}
		printf("\n");
	}
}

void show_variable(is_variable *var){

	printf("%s ",var->id);
	show_expression(var->expression);


}

void show_expression(is_expression *exp){
	
	switch(exp->type){
		case is_infix:
			show_infix(exp->exp.infix);
			break;
		case is_val:
			show_value(exp->exp.value);
			break;
		case is_funct_call:
			show_function_call(exp->exp.function);
			break;
		case is_exp:
			show_expression(exp->exp.expression);
			break;
		case is_if_exp:
			show_if_expression(exp->exp.if_expression);
			break;
	}

}

void show_infix(is_infix_expression *exp){
	
	printf("Infix Expression: ");
	show_expression(exp->exp1);
	show_infix_type(exp->oper);
	show_expression(exp->exp2);
	printf("\n");

}


void show_infix_type(infixType type){

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

void show_value(is_value *val){
	
	printf("Value  ");
	show_type(val->type);
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

void show_function_call(is_function_call *function){

	printf(" %s ( ",function->id);
	show_parameter_list(function->parameter_list);
	printf(" ) \n");
}

void show_parameter_list(is_parameter_list *list){

	if(list){
		is_parameter_list *aux;
		for(aux = list; aux != NULL ; aux = aux->next){
			show_expression(aux->expression);
			if(aux->next)
				printf(", ");
		}
		printf("\n");
	}

}

void show_condition_statement(is_condition_statement *condition) {
	switch (condition->type) {
		case is_if_statement:
			printf("IF( ");
			show_if_statement(condition->stat.if_statement);
			break;
		case is_if_else_statement:
			printf("IF( ");
			show_if_else_statement(condition->stat.if_else_statement);
			break;
		case is_switch_statement:
			printf("SWITCH( ");
			show_switch_statement(condition->stat.switch_statement);
			break;
	}
}

void show_if_statement(is_if *if_statement) {
	show_expression(if_statement->expression);
	printf(" ) { ");
	show_condition_code(if_statement->code);
	printf(" } ");
}

void show_if_expression(is_if_expression *exp){
	
	show_expression(exp->exp1);
	show_if_type(exp->type);
	show_expression(exp->exp2);

}

void show_if_type(if_exp_type type){
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

void show_condition_code(is_condition_code *code) {
	if (code->operation != NULL) {
		show_operation(code->operation);
	} else if (code->operation_list != NULL) {
		show_operation_list(code->operation_list);
	}
}

void show_if_else_statement(is_if_else *if_else_statement) {
	show_expression(if_else_statement->expression);
	printf(" ) { ");
	show_condition_code(if_else_statement->if_code);
	printf(" } ELSE {");
	show_condition_code(if_else_statement->else_code);
	printf(" } ");
}

void show_switch_statement(is_switch *switch_statement) {
	show_expression(switch_statement->expression);
	printf(" ) { ");
	show_switch_cases(switch_statement->cases);
	printf(" } ");
}

void show_switch_case(is_switch_case *a_case) {
	if (a_case->type == is_DEFAULT) {
		printf("DEFAULT: ");
		show_operation_list(a_case->operation_list);
	} else if(a_case->type == is_NORMAL) {
		printf("CASE ");
		show_value(a_case->value);
		printf(" : ");
		show_operation_list(a_case->operation_list);
	}
}

void show_switch_cases(is_switch_case *cases) {
	if(cases) {
		is_switch_case *aux;
		for (aux = cases; aux != NULL; aux = aux->next) {
			show_switch_case(aux);
			if(aux->next)
				printf(", ");
			printf("\n");
		}
	}
}
