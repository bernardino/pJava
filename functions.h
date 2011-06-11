#include "structures.h"

/* insert program */
is_program* insert_program( char *id, is_main *main, is_function_list *function_list, is_global_list *variable_list);
is_global_list* insert_global_list(is_global_list *list, is_global_dec *dec);
is_global_dec* insert_global_declaration(scopeType tp, is_declaration *declaration, int line);

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
is_operation* insert_operation_function(is_function_call* call);


/* insert functions */
is_function_list* insert_function_list(is_function_list *list, is_function *function);
is_function_call* insert_function_call(char *id, is_parameter_list *param, int line);
is_function* insert_function(scopeType sT, unsignedVariableType uT, char *id, is_argument_list *list, is_code *code, int line);

/* insert declaration */
is_declaration* insert_declaration(unsignedVariableType type, is_variable_list *var_list, int line);

/* insert assignment */
is_assignment *insert_assignment(char *id, assignmentType type, is_expression* exp, int line);

/* insert unary */
is_unary* insert_unary(char *id, unaryType type, int line);

/* insert expressions */
is_expression* insert_expression( is_expression *exp, int line);
is_expression* insert_expression_value( is_value *val, int line);
is_expression* insert_expression_func( is_function_call *call, int line);
is_expression* insert_expression_infix(is_infix_expression *infix, int line);
is_expression* insert_expression_if(is_if_expression *if_expression, int line);
is_expression* insert_expression_unary(is_unary *unary, int line);

is_infix_expression* insert_infix( is_expression* exp1, infixType type, is_expression *exp2);
is_if_expression* insert_if(is_expression *exp1, if_exp_type type, is_expression *exp2, int line);
is_if_expression* insert_if_value(is_value *value, if_exp_type type, int line);
is_if_expression* insert_if_exp(is_if_expression *exp1, if_exp_type type, is_if_expression *exp2, int line);
is_control* insert_control(controlType type, is_expression *exp, int line);

/* insert conditions */
is_condition_statement* insert_if_statement(is_if_expression *expression,is_condition_code *code, int line);
is_condition_statement* insert_if_else_statement(is_if_expression *expression,is_condition_code *if_code, is_condition_code *else_code, int line);
is_condition_statement* insert_switch_statement(is_expression *expression, is_switch_case *switch_case, int line);
is_switch_case* insert_switch_case(switchType type, is_value *val, is_operation_list *operation_list, is_switch_case *next, int line);

is_condition_code* insert_condition_code(is_operation_list *operation_list, is_operation *operation);

/* insert cycles */
is_cycle* insert_for(is_for_init *init, is_if_expression *expression, is_increase_list *inc, is_condition_code *code, int line);
is_cycle* insert_while(is_if_expression *expression, is_condition_code *code, int line);
is_cycle* insert_do_while(is_condition_code *code, is_if_expression *expression, int line);

is_increase* insert_assign_inc( is_assignment *assign);
is_increase* insert_unary_inc(is_unary *unary);
is_for_init* insert_for_assign( is_assignment *assign, int line);
is_for_init* insert_for_declaration( is_declaration *dec, int line);

is_increase_list* insert_increase_list(is_increase_list *inc_list, is_increase *inc);

/* insert variables */
is_variable_list* insert_variable_list(is_variable_list *list, is_variable *var);
is_variable* insert_variable(identiferType type, char *id, is_expression *exp,int line);

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
