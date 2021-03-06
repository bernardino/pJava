#include "structures.h"
#include "symbol_table.h"

table_element* lookupLocalVar(environment_list *env, char *id);
void convertType(unsignedVariableType type);

void translate_program(is_program *program, prog_env *pe);
void translate_header();
void translate_footer();
void translate_redirector();
void translate_global_list(prog_env *pe, environment_list *env,is_global_list *list);
void translate_global_var(table_element *var);

void translate_function_list(prog_env *pe, is_function_list *list);
void translate_function(prog_env *pe, is_function *function);
void translate_argument_list(prog_env *pe, environment_list *env, is_argument_list *list);
void translate_argument(prog_env *pe, table_element *variable, is_argument *arg, int outgoing);

void translate_parameter_list(prog_env *pe, environment_list*env, is_parameter_list *list);

void translate_variable(table_element *var);

void translate_operation_list(prog_env *pe, environment_list *env,is_operation_list *list);
void translate_operation(prog_env *pe, environment_list *env,is_operation *operation);
void translate_declaration(prog_env *pe, environment_list *env, is_declaration *dec);
void translate_variable_list(prog_env *pe, environment_list *env, is_variable_list *list, unsignedVariableType type);
void translate_assignment(prog_env *pe, environment_list *env, is_assignment *assign);
void translate_assignment_operator(assignmentType type);

int translate_expression(prog_env *pe, environment_list *env, is_expression *exp);
table_element* translate_value(prog_env *pe, environment_list *env,is_value *value);
void translate_infix_expression(prog_env *pe, environment_list *env,is_infix_expression *exp);
void translate_function_call(prog_env *pe, environment_list *env, is_function_call *call);
void translate_if_expression(prog_env *pe, environment_list *env, is_if *st);
void translate_if(prog_env *pe, environment_list *env, is_if *st);
void invertOperator(if_exp_type type);
environment_list* lookupByID(environment_list *env);
void translate_if_else_expression(prog_env *pe, environment_list *env, is_if_else *st);

void translate_control(prog_env *pe,environment_list *env, is_control *control);
void translate_return(prog_env *pe, environment_list *env, is_control *c);
void printType();
void translate_switch(prog_env *pe,environment_list *env, is_switch *sw);
void translate_switch_case(prog_env *pe, environment_list *env, is_switch_case *c, int offset);

void translate_cycle(prog_env *pe,environment_list *env, is_cycle *cycle);
void translate_for(prog_env *pe, environment_list *env, is_for *f);
void translate_init(prog_env *pe, environment_list *env, is_for_init *init);
void translate_cycle_expression(prog_env *pe, environment_list *env, is_if_expression *_if);
void translate_increase_list(prog_env *pe, environment_list *env, is_increase_list *list);
void translate_increase(prog_env *pe, environment_list *env, is_increase *inc);

void translate_while(prog_env *pe, environment_list *env, is_while *whil);

void translate_do_while(prog_env *pe, environment_list *env, is_do_while *whil);
void translate_do_while_expression(prog_env *pe, environment_list *env, is_if_expression *_if, int temporary);
void logicOperator(if_exp_type type);

void translate_unary(prog_env *pe, environment_list *env, is_unary *unary);
void translate_local_variable(table_element *el);
void translate_main(prog_env *pe, is_main *main);