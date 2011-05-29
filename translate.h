#include "structures.h"
#include "symbol_table.h"


void translate_program(is_program *program, prog_env *pe);
void translate_header();
void translate_global_list(table_element *variables);
void translate_global_var(table_element *var);