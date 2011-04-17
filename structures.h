#ifndef _STRUCTURES_
#define _STRUCTURES_

typedef enum { is_char, is_int, is_boolean, is_double, is_string, is_void} unsignedVariableType;
typedef enum { is_id, is_array} identiferType;
typedef enum { is_plus, is_minus, is_mult, is_div, is_and, is_percent, is_lshift, is_rshift} operationType;
typedef enum { is_OP_EQ, is_OP_NE, is_OP_LE, is_OP_GE, is_OP_LOR, is_OP_LAND, is_ASS_ADD, is_ASS_SUB, is_ASS_MUL, is_ASS_DIV} assignmentType;
typedef enum { is_infix_exp, is_unary_exp, is_number, is_function_call} expressionType;
typedef enum { is_before_plus, is_before_minus, is_after_plus, is_after_minus } unaryType;
typedef enum { is_private, is_public, is_protected } scopeType;
typedef struct _program is_program;
typedef struct _main is_main;
typedef struct _function_list is_function_list;
typedef struct _function is_function;
typedef struct _code is_code;
typedef struct _argument_list is_argument_list;
typedef struct _argument is_argument;
typedef struct _operation_list is_operation_list;
typedef struct _operation is_operation;
typedef struct _declaration is_declaration;
typedef struct _assign is_assignment;
typedef struct _variable is_variable;
typedef struct _is_cycle is_cycle;
typedef struct _is_if is_if;
typedef struct _value is_value;
typedef struct _variable_list is_variable_list;
typedef struct _expression is_expression;
typedef struct _infix_expression is_infix_expression;
typedef struct _unary_expression is_unary_expression;


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

/* Declaration */

struct _declaration{
	int line;
	unsignedVariableType type;
	is_variable_list *variable_list;
	
};

struct _assign{
	int line;
	unsignedVariableType type;
	assignmentType assign_type;
	is_expression *expression;
	
};

/* Expressions */

struct _expression{
	char *var;
	expressionType type;
	union{
		is_value *value;
		is_infix_expression *infix_expression;
		is_unary_expression *unary_expression;
		is_function *function;
		is_expression *expression;
		
	}exp;
	is_expression *next;	

};

struct _unary_expression{
	char *id;
	unaryType type;
};

struct _infix_expression{
	is_expression  *exp1;
	operationType oper;
	is_expression  *exp2;
};


struct _is_cycle{
	

};

struct _is_if{
	

};

struct _operation{
	operationType type;
	union{
		is_declaration *declaration;
		is_assignment *assignment;
		is_function *function;
		is_cycle *cycle;
		is_if *condition;
	}oper;

};

struct _operation_list{
	is_operation *operation;
	is_operation_list *next;	

};


struct _argument{
	char *id;
	unsignedVariableType type;
};

struct _argument_list{
	is_argument *argument;
	is_argument_list *next;
};

struct _code{
	is_operation_list *operation_list;
};

struct _function{
	char *id;
	scopeType type;
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
