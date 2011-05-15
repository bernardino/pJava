#include "structures.h"
#include "symbol_table.h"

table_element* create_symbol(int offset, char* name, unsignedVariableType type);
table_element* lookupElement(table_element* table, char *str);
environment_list* lookupEnvironment(environment_list* list, char *str);
table_element* searchVar(environment_list *env,table_element *global, table_element *local, char *name);

prog_env* semantic_analysis(is_program *prog);
void semantic_analysis_global_variables(prog_env *pe, is_global_list *list);
void semantic_analysis_global_variable(prog_env *pe, is_global_dec *dec);
table_element* semantic_analysis_declaration(prog_env* pe, environment_list *env,table_element *variables, globalType type, is_declaration *declaration);
table_element* semantic_analysis_variable_list(prog_env *pe,environment_list *env,table_element *variables, globalType typ,unsignedVariableType type, is_variable_list *variable_list);
table_element* semantic_analysis_variable(prog_env *pe,environment_list *env, table_element *variables, globalType typ, unsignedVariableType type, is_variable *variable);

table_element* insertVariable(prog_env* pe,environment_list *env,table_element * variables,int line, char *name, table_element *el, globalType type);

unsignedVariableType semantic_analysis_var_expression(prog_env *pe,environment_list *env, table_element *variables, unsignedVariableType type, is_expression *expression, int line, int analysis);
unsignedVariableType semantic_analysis_value(prog_env *pe,environment_list *env, table_element *variables,unsignedVariableType type, is_value *value,int line, int analysis);
void semantic_analysis_if_expression(prog_env *pe, environment_list *env,is_if_expression *exp,int line);
unsignedVariableType semantic_analysis_function_call(prog_env *pe,environment_list *env, table_element *variables, unsignedVariableType type, is_function_call *call, int exp);
void semantic_analysis_parameters(prog_env *pe,environment_list *father, table_element *variables, environment_list *env, is_parameter_list *list, int line);

void semantic_analysis_main(prog_env* pe, is_main *main);
void semantic_analysis_function_list(prog_env *pe, is_function_list *list);
void semantic_analysis_function(prog_env *pe, is_function *function);
void semantic_analysis_argument_list(prog_env *pe, environment_list *env);
void semantic_analysis_operation_list(prog_env *pe,environment_list *env,is_operation_list *list);
void semantic_analysis_operation(prog_env *pe,environment_list *env,is_operation *operation);

void semantic_analysis_assignment(prog_env *pe,environment_list *env, table_element *variables, is_assignment *assignment);
void semantic_analysis_unary(prog_env *pe,environment_list *env, table_element *variables, is_unary *unary);
void semantic_analysis_cycle(prog_env *pe, environment_list *env,table_element *variables, is_cycle *cycle);
void semantic_analysis_for(prog_env *pe, environment_list *env,table_element *variables, is_for *for_cycle);
void semantic_analysis_increase_list(prog_env *pe, environment_list *env, is_increase_list *list);
void semantic_analysis_increase(prog_env *pe, environment_list *env, is_increase *inc);

void semantic_analysis_while(prog_env *pe, environment_list *env, table_element *variables, is_while *whil);
void semantic_analysis_do_while(prog_env *pe, environment_list *env, table_element *variables, is_do_while *whil);

void semantic_analysis_condition(prog_env *pe,environment_list *env, table_element *variables, is_condition_statement *cond);
void semantic_analysis_if(prog_env *pe,environment_list *env, table_element *variables, is_if *stat);
void semantic_analysis_if_else(prog_env *pe,environment_list *env, table_element *variables, is_if_else *stat);
void semantic_analysis_switch(prog_env *pe,environment_list *env, table_element *variables, is_switch *sw);
void semantic_analysis_case(prog_env *pe,environment_list *env, table_element *variables, is_switch_case *cases);
void semantic_analysis_case_value(prog_env *pe,environment_list *env, table_element *variables, is_value *value,int line);

void semantic_analysis_control(prog_env *pe,environment_list *env, table_element *variables, is_control *control);
