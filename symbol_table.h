#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef enum { is_character, is_integer, is_bool, is_doub, is_str} basic_type;
typedef enum { is_global, is_local } scope_type;
typedef struct _t1{
	char name[32];
	basic_type type;
	scope_type scope;
	char function_name[32];
	struct _t1 *next;
} table_element;

table_element *insert_element(char *str, basic_type t);
void show_table();
table_element *search_element(char *str);

#endif
