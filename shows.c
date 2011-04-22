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
			break;
		case is_funct:
			printf("Function Call:");
			break;
		case is_un:
			printf("Unary:");
			break;
		case is_cyc:
			printf("Cycle: ");
			break;
		case is_cond:
			printf("Choice:");
			break;
		case is_cont:
			printf("Control:");
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

	printf(" %s ",function->id);
	show_parameter_list(function->parameter_list);
	printf("\n");
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




