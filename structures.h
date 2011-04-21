#ifndef _STRUCTURES_
#define _STRUCTURES_

typedef enum { is_char, is_int, is_boolean, is_double, is_string, is_void} unsignedVariableType;
typedef enum { is_id, is_array} identiferType;
typedef enum { is_plus, is_minus, is_mult, is_div, is_and, is_percent, is_lshift, is_rshift} infixType;
typedef enum { is_ASS_EQ, is_ASS_ADD, is_ASS_SUB, is_ASS_MUL, is_ASS_DIV , is_ASS_AND, is_ASS_PERC, is_ASS_LS, is_ASS_RS} assignmentType;
typedef enum { is_infix, is_val, is_funct_call, is_exp, is_if_exp, is_control_exp} expressionType;
typedef enum { is_before_plus, is_before_minus, is_after_plus, is_after_minus } unaryType;
typedef enum { is_private, is_public, is_protected } scopeType;
typedef enum { is_dec, is_assign, is_funct, is_un, is_cyc, is_cond} operationType;
typedef enum { is_OP_EQ, is_OP_NE, is_OP_LE, is_OP_GE, is_OP_LOR, is_OP_LAND } if_exp_type;
typedef enum { is_break, is_continue, is_return, is_return_exp } controlType;


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
typedef struct _condition_statement is_condition_statement;
typedef struct _condition_code is_condition_code;
typedef struct _is_if is_if;
typedef struct _is_if_else is_if_else;
typedef struct _is_switch is_switch;
typedef struct _switch_case is_switch_case;
typedef struct _value is_value;
typedef struct _variable_list is_variable_list;
typedef struct _expression is_expression;
typedef struct _infix_expression is_infix_expression;
typedef struct _if_expression is_if_expression;

typedef struct _control is_control;


/* Cicles */
typedef struct _for is_for;
typedef struct _doWhile is_do_while;
typedef struct _while is_while;

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
		is_condition_statement *condition;
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

typedef enum { is_if_statement, is_if_else_statement, is_switch_statement } conditionType;

struct _condition_statement{
	conditionType type;
	union{
		is_if *if_statement;
		is_switch *switch_statement;
		is_if_else *if_else_statement;
	}stat;
};


struct _is_if{
	is_expression *expression;
	is_condition_code *code;
};

struct _is_if_else{
	is_expression *expression;
	is_condition_code *if_code;
	is_condition_code *else_code;

};

struct _is_switch{
	is_expression *expression;
	is_switch_case *cases;
};

typedef enum { is_DEFAULT, is_NORMAL } switchType;

struct _switch_case{
	switchType type;
	is_value *value;
	is_operation_list *operation_list;
	is_switch_case *next;
};

struct _condition_code{
	is_operation_list *operation_list;
	is_operation *operation;

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
		is_if_expression *if_expression;
		is_control *control;		
	}exp;
	is_expression *next;	

};

struct _infix_expression{
	is_expression  *exp1;
	infixType oper;
	is_expression  *exp2;
};

struct _if_expression{
	is_expression  *exp1;
	if_exp_type type;
	is_expression  *exp2;
};

struct _control{
	is_expression *expression;
	controlType type;

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
