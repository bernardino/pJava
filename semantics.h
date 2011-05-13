#include "structures.h"
#include "symbol_table.h"

table_element* create_symbol(int offset, char* name, unsignedVariableType type);
table_element* lookupElement(table_element* table, char *str);
environment_list* lookupEnvironment(environment_list* list, char *str);

prog_env* semantic_analysis(is_program *prog);
void semantic_analysis_global_variables(prog_env *pe, is_global_list *list);
void semantic_analysis_global_variable(prog_env *pe, is_global_dec *dec);
table_element* semantic_analysis_declaration(prog_env* pe, table_element *variables, globalType type, is_declaration *declaration);
table_element* semantic_analysis_variable_list(prog_env *pe,table_element *variables, globalType typ,unsignedVariableType type, is_variable_list *variable_list);
table_element* semantic_analysis_variable(prog_env *pe, table_element *variables, globalType typ, unsignedVariableType type, is_variable *variable);

table_element* insertVariable(prog_env* pe,table_element * variables,int line, char *name, table_element *el, globalType type);

void semantic_analysis_main(prog_env* pe, is_main *main);

void semantic_analysis_function(prog_env *pe, is_function *function);

void semantic_analysis_operation_list(prog_env *pe,environment_list *env,is_operation_list *list);
void semantic_analysis_operation(is_operation *operation);


