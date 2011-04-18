#ifndef _STRUCTURES_
#define _STRUCTURES_

typedef enum { is_char, is_int, is_boolean, is_double, is_string, is_void} unsignedVariableType;
typedef enum { is_id, is_array} identiferType;
typedef enum { is_plus, is_minus, is_mult, is_div, is_and, is_percent, is_lshift, is_rshift} infixType;
typedef enum { is_ASS_EQ, is_ASS_ADD, is_ASS_SUB, is_ASS_MUL, is_ASS_DIV , is_ASS_AND, is_ASS_PERC, is_ASS_LS, is_ASS_RS} assignmentType;
typedef enum { is_infix, is_val, is_funct_call, is_exp} expressionType;
typedef enum { is_before_plus, is_before_minus, is_after_plus, is_after_minus } unaryType;
typedef enum { is_private, is_public, is_protected } scopeType;
typedef enum { is_dec, is_assign, is_funct, is_un, is_cyc, is_cond} operationType;


typedef struct _program is_program;
typedef struct _main is_main;
typedef struct _function_list is_function_list;
typedef struct _function is_function;
typedef struct _function_call is_function_call;
typedef struct _code is_code;
typedef struct _parameter_list is_parameter_list;
typedef struct _argument_list is_argument_list;
typedef struct _argument is_argument;
typedef struct _operation_list is_operation_list;
typedef struct _operation is_operation;
typedef struct _declaration is_declaration;
typedef struct _unary is_unary;
typedef struct _assign is_assignment;
typedef struct _variable is_variable;
typedef struct _is_cycle is_cycle;
typedef struct _is_if is_if;
typedef struct _value is_value;
typedef struct _variable_list is_variable_list;
typedef struct _expression is_expression;
typedef struct _infix_expression is_infix_expression;


/* Cicles */
typedef struct _for is_for;
typedef struct _doWhile is_do_while;
typedef struct _while is_while;
typedef struct _switch is_switch;

/* Variable */

struct _value{
	unsignedVariableType type;
	union{
		int _int;
		char _char;
		char *_string;
		double _double;
		int _boolean;
	}valueType;
};

struct _variable{
	is_value *value;
	char *id;
};

struct _variable_list{
	is_variable *variable;
	is_variable_list *next;
	
};

/* Operations */

struct _operation{
	operationType type;
	union{
		is_declaration *declaration;
		is_assignment *assignment;
		is_function *function;
		is_unary *unary;
		is_cycle *cycle;
		is_if *condition;
	}oper;
};

struct _operation_list{
	is_operation *operation;
	is_operation_list *next;	

};

struct _declaration{
	int line;
	unsignedVariableType type;
	is_variable_list *variable_list;
	
};

struct _assign{
	int line;
	char *id;
	assignmentType type;
	is_expression *expression;
	
};

struct _unary{
	char *id;
	unaryType type;
};

struct _is_cycle{
	

};

struct _is_if{
	

};

/* Expressions */

struct _expression{
	char *var;
	expressionType type;
	union{
		is_value *value;
		is_infix_expression *infix;
		is_function_call *function;
		is_expression *expression;
		
	}exp;
	is_expression *next;	

};

struct _infix_expression{
	is_expression  *exp1;
	infixType oper;
	is_expression  *exp2;
};


struct _argument{
	char *id;
	unsignedVariableType type;
};

struct _argument_list{
	is_argument *argument;
	is_argument_list *next;
};

struct _parameter_list{
	is_expression* expression;
	is_parameter_list *next;

};

struct _code{
	is_operation_list *operation_list;
};

struct _function_call{
	char *id;
	is_parameter_list *parameter_list;
	

};

struct _function{
	char *id;
	scopeType scopeType;
	unsignedVariableType returnType;
	is_argument_list *argument_list;
	is_code *code;

};

struct _function_list{
	is_function *function;
	is_function_list *next;

};

struct _main{
	is_argument_list *argument_list;
	is_code *code;
	
};

struct _program{
	char *id;
	is_main *main;
	is_function_list *function_list;

};

#endif
