#ifndef _STRUCTURES_
#define _STRUCTURES_

typedef enum { is_char, is_int, is_boolean, is_float, is_double, is_string} unsignedVariableType;
typedef enum { is_plus, is_minus, is_mult, is_div, is_and, is_percent, is_lshift, is_rshift} operationType;
typedef enum { } is_operation;
typedef enum { is_infix_exp, is_unary_exp, is_number, is_function } expressionType;
typedef enum { is_before_plus, is_before_minus, is_after_plus, is_after_minus } unaryType;

typedef struct _declaration is_declaration;
typedef struct _variable is_variable;
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
		float _float;
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
	is_operation operation;
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
		//is_function
		is_expression *expression;
		
	}exp;
	is_expression *next;	

};

typedef struct _unary_expression{
	char *id;
	unaryType type;
	
};

typedef struct _infix_expression{
	is_expression  *exp1;
	operationType oper;
	is_expression  *exp2;
};

