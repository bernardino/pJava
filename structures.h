#ifndef _STRUCTURES_
#define _STRUCTURES_

typedef enum { is_char, is_int, is_boolean, is_double, is_string, is_void, is_ident} unsignedVariableType;
typedef enum { is_id, is_array} identiferType;
typedef enum { is_plus, is_minus, is_mult, is_div, is_and, is_percent, is_lshift, is_rshift} infixType;
typedef enum { is_ASS_EQ, is_ASS_ADD, is_ASS_SUB, is_ASS_MUL, is_ASS_DIV , is_ASS_AND, is_ASS_PERC, is_ASS_LS, is_ASS_RS} assignmentType;
typedef enum { is_infix, is_val, is_funct_call, is_exp, is_if_exp } expressionType;
typedef enum { is_before_plus, is_before_minus, is_after_plus, is_after_minus } unaryType;
typedef enum { is_dec, is_assign, is_funct, is_un, is_cyc, is_cond, is_cont} operationType;
typedef enum { is_OP_BIGGER, is_OP_LOWER, is_OP_EQ, is_OP_NE, is_OP_LE, is_OP_GE, is_OP_LOR, is_OP_LAND } if_exp_type;
typedef enum { is_break, is_continue, is_return, is_return_exp } controlType;
typedef enum { is_private, is_public, is_protected } scopeType;
typedef enum { GLOBAL, LOCAL } globalType;


typedef struct _program is_program;
typedef struct _main is_main;
typedef struct _global_list is_global_list;
typedef struct _global_dec is_global_dec;
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

typedef struct _is_cycle is_cycle;
typedef struct _for is_for;
typedef struct _while is_while;
typedef struct _doWhile is_do_while;

typedef struct _increase_list is_increase_list;
typedef struct _increase is_increase;

typedef struct _condition_statement is_condition_statement;
typedef struct _condition_code is_condition_code;
typedef struct _is_if is_if;
typedef struct _is_if_else is_if_else;
typedef struct _is_switch is_switch;
typedef struct _switch_case is_switch_case;

typedef struct _value is_value;
typedef struct _variable_list is_variable_list;
typedef struct _variable is_variable;
typedef struct _expression is_expression;
typedef struct _infix_expression is_infix_expression;
typedef struct _if_expression is_if_expression;
typedef struct _control is_control;

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
	int line;
	char *id;
	is_expression *expression;
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
		is_function_call *function;
		is_unary *unary;
		is_cycle *cycle;
		is_condition_statement *condition;
		is_control *control;
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
	int line;
	char *id;
	unaryType type;
};

typedef enum { is_for_cycle, is_while_cycle, is_do_while_cycle } cycleType;

struct _is_cycle{
	int line;
	cycleType type;
	union{
		is_for *for_cycle;
		is_while *while_cycle;
		is_do_while *do_while;
	}cyc;

};

struct _for{
	is_assignment *assignment;
	is_if_expression *if_expression;
	is_increase_list *increase;
	is_condition_code *code;
};

struct _while{
	is_if_expression *if_expression;
	is_condition_code *code;

};

struct _doWhile{
	is_if_expression *if_expression;
	is_condition_code *code;
};

struct _increase_list{
	is_increase *inc;
	is_increase_list *next;

};

typedef enum { is_assign_inc, is_unary_inc } increaseType;

struct _increase{
	increaseType type;
	union{
		is_assignment *assign;
		is_unary *unary;

	}inc;

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
	int line;
	is_expression *expression;
	is_condition_code *code;
};

struct _is_if_else{
	int line;
	is_expression *expression;
	is_condition_code *if_code;
	is_condition_code *else_code;

};

struct _is_switch{
	int line;
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
        int line;
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
	int line;
	char *id;
	is_parameter_list *parameter_list;

};

struct _function{
	int line;
	char *id;
	scopeType scope_type;
	unsignedVariableType return_type;
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

struct _global_list{
	is_global_dec *dec;
	is_global_list *next;

};

struct _global_dec{
	int line;
	scopeType tp;
	is_declaration *declaration;
};

struct _program{
	char *id;
	is_main *main;
	is_function_list *function_list;
	is_global_list *variable_list;

};

#endif
