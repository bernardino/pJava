#include "structures.h"

/* insert program */
is_program* insert_program(char *, is_main *, is_function_list*);

/* insert_main */
is_main* insert_main( is_code* code);

/* insert code */
is_code* insert_code( is_operation_list *operation_list);

/* insert operations */
is_operation_list* insert_operation_list(is_operation_list *list, is_operation *op);
is_operation* insert_operation_dec(is_declaration *dec);
is_operation* insert_operation_assign(is_assignment *assign);
is_operation* insert_operation_unary(is_unary* unary);
is_operation* insert_operation_if(is_condition_statement *condition);
is_operation* insert_operation_cycle(is_cycle *cycle);
is_operation* insert_operation_control(is_control* control);


/* insert functions */
is_function_list* insert_function_list(is_function_list *list, is_function *function);
is_function_call* insert_function_call(char *id, is_parameter_list *param);
is_function* insert_function(scopeType sT, unsignedVariableType uT, char *id, is_argument_list *list, is_code *code);

/* insert declaration */
is_declaration* insert_declaration(unsignedVariableType type, is_variable_list *var_list);

/* insert assignment */
is_assignment *insert_assignment(char *id, assignmentType type, is_expression* exp);

/* insert unary */
is_unary* insert_unary(char *id, unaryType type);

/* insert expressions */
is_expression* insert_expression( is_expression *exp);
is_expression* insert_expression_value( is_value *val);
is_expression* insert_expression_func( is_function_call *call);
is_expression* insert_expression_infix(is_infix_expression *infix);
is_expression* insert_expression_if(is_if_expression *if_expression);

is_infix_expression* insert_infix( is_expression* exp1, infixType type, is_expression *exp2);
is_if_expression* insert_if(is_expression *exp1, if_exp_type type, is_expression *exp2);
is_control* insert_control(controlType type, is_expression *exp);

/* insert conditions */
is_condition_statement* insert_if_statement(is_expression *expression,is_condition_code *code);
is_condition_statement* insert_if_else_statement(is_expression *expression,is_condition_code *if_code, is_condition_code *else_code);
is_condition_statement* insert_switch_statement(is_expression *expression, is_switch_case *switch_case);
is_switch_case* insert_switch_case(switchType type, is_value *val, is_operation_list *operation_list, is_switch_case *next);

is_condition_code* insert_condition_code(is_operation_list *operation_list, is_operation *operation);

/* insert cycles */
is_cycle* insert_for(is_assignment *assign, is_if_expression *if_expression, is_increase_list *inc, is_condition_code *code);
is_cycle* insert_while(is_if_expression *if_expression, is_condition_code *code);
is_cycle* insert_do_while(is_condition_code *code, is_if_expression *if_expression);

is_increase* insert_assign_inc( is_assignment *assign);
is_increase* insert_unary_inc(is_unary *unary);

is_increase_list* insert_increase_list(is_increase_list *inc_list, is_increase *inc);

/* insert variables */
is_variable_list* insert_variable_list(is_variable_list *list, is_variable *var);
is_variable* insert_variable(identiferType type, char *id, is_expression *exp);

/* insert parameters */
is_parameter_list* insert_parameter_list(is_parameter_list *list, is_expression *exp);

/* insert arguments */
is_argument_list* insert_argument_list(is_argument_list *list, is_argument *arg);
is_argument* insert_argument(unsignedVariableType type, char *id);

/* insert values */
is_value* insert_int(unsignedVariableType type, int value);
is_value* insert_char(unsignedVariableType type, char value);
is_value* insert_string(unsignedVariableType type, char *value);
is_value* insert_boolean(unsignedVariableType type, int value);
is_value* insert_double(unsignedVariableType type, double value);
