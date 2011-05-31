#include "structures.h"
#include "symbol_table.h"

table_element* lookupLocalVar(environment_list *env, char *id);

void translate_program(is_program *program, prog_env *pe);
void translate_header();
void translate_footer();
void translate_redirector();
void translate_global_list(prog_env *pe, environment_list *env,is_global_list *list);
void translate_global_var(table_element *var);

void translate_function_list(prog_env *pe, is_function_list *list);
void translate_function(prog_env *pe, is_function *function);
void translate_argument_list(prog_env *pe, environment_list *env, is_argument_list *list);
void translate_argument(prog_env *pe,table_element *variables, is_argument *arg);

void translate_variable(table_element *var);

void translate_operation_list(prog_env *pe, environment_list *env,is_operation_list *list);
void translate_operation(prog_env *pe, environment_list *env,is_operation *operation);
void translate_declaration(prog_env *pe, environment_list *env, is_declaration *dec);
void translate_variable_list(prog_env *pe, environment_list *env, is_variable_list *list, unsignedVariableType type);
void translate_assignment(prog_env *pe, environment_list *env, is_assignment *assign);
void translate_assignment_operator(assignmentType type);

int translate_expression(prog_env *pe, environment_list *env, is_expression *exp);
void translate_value(is_value *value);
void translate_infix_expression(prog_env *pe, environment_list *env,is_infix_expression *exp);
void translate_function_call(prog_env *pe, environment_list *env, is_function_call *call);
void translate_if_expression(prog_env *pe, environment_list *env, is_if_expression *exp);

void translate_unary(prog_env *pe, environment_list *env, is_unary *unary);
void translate_local_variable(table_element *el);
void translate_main(prog_env *pe, is_main *main);