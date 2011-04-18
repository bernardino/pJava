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
is_expression* insert_expression_value( is_value *val);
is_expression* insert_expression_func( is_function_call *call);
is_expression* insert_expression_infix(is_infix_expression* infix);
is_expression* insert_expression( is_expression *exp);
is_infix_expression* insert_infix( is_expression* exp1, infixType type, is_expression *exp2);


/* insert variables */
is_variable_list* insert_variable_list(is_variable_list *list, is_variable *var);
is_variable* insert_variable(identiferType type, char *id, is_value *val);

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
