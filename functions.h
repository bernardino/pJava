#include "structures.h"

is_program* insert_program(char *, is_main *, is_function_list*);
is_main* insert_main( is_code*);
is_function_list* insert_function_list(is_function_list *list, is_function *function);
//is_operation_list* insert_operation_list();


is_value* insert_int(unsignedVariableType type, int value);
is_value* insert_char(unsignedVariableType type, char value);
is_value* insert_string(unsignedVariableType type, char *value);
is_value* insert_boolean(unsignedVariableType type, int value);
is_value* insert_double(unsignedVariableType type, double value);

is_variable* insert_variable(unsignedVariableType type, char *id);
