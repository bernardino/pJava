#include "structures.h"

int check_program(is_program *program);
int check_main(is_main *main);
int check_code(is_code *code);
int check_function_list(is_function_list *function_list);
int check_function(is_function *function);
int check_scope(scopeType type);
int check_type(unsignedVariableType type);
int check_argument_list(is_argument_list *list);
int check_argument(is_argument *arg);
int check_assignment(is_assignment *assignment);
int check_unary_expression(is_unary *unary);
int check_control_statement(is_control *control);
int check_cycle(is_cycle *cycle);
int check_for_cycle(is_for *for_cycle);
int check_while_cycle(is_while *while_cycle);
int check_do_while_cycle(is_do_while *do_while);
int check_increase_list(is_increase_list *increase);
int check_increase(is_increase *inc);

int check_operation_list(is_operation_list *list);
int check_operation(is_operation *operation);

int check_declaration(is_declaration *dec);
int check_variable_list(is_variable_list *list);
int check_variable(is_variable *var);

int check_expression(is_expression *exp);
int check_value(is_value *val);
int check_infix(is_infix_expression *exp);
int check_infix_type(infixType type);
int check_condition_statement(is_condition_statement *condition);
int check_condition_code(is_condition_code *code);
int check_if_statement(is_if *if_statement);
int check_if_type(if_exp_type type);
int check_if_expression(is_if_expression *exp);
int check_if_else_statement(is_if_else *if_else_statement);
int check_switch_statement(is_switch *switch_statement);
int check_switch_cases(is_switch_case *cases);
int check_switch_case(is_switch_case *a_case);

int check_function_call(is_function_call *function);
int check_parameter_list(is_parameter_list *list);


