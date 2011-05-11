#ifndef _SYMBOL_TABLE_
#define _SYMBOL_TABLE_

typedef enum {integer, character, doub, string, function} basic_type;

//lista ligada de simbolos - um ambiente/registo de activação
typedef struct _t1{	
	char name[32];
	basic_type type;
	int offset;		//futura posição na frame, caso seja uma variavel -1, se for uma procedure.
	struct _t1 *next;
} table_element;


typedef enum {func, loop_for, loop_while, loop_do, if_else, global} environmentType;
//lista de procedimentos definidos no programa
typedef struct _t4{
	char* name;
	table_element *locals;
	environmentType type;
	
	struct _t4* father;
	struct _t4* local_environment;
	
	basic_type returnType;
	struct _t4 *next;
}environment_list;

//Estrutura que guarda TODOS os simbolos de um programa: o ambiente "global" e a lista de ambientes
typedef struct _t5{
	table_element* global;
	environment_list* procs;
}prog_env;
#endif
