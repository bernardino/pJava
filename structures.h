#ifndef _STRUCTURES_
#define _STRUCTURES_

typedef enum { _char, _int, _boolean, _float, _double} unsignedVariableType;
typedef enum { is_plus, is_minus, is_mult, is_div, is_and, is_percent, is_lshift, is_rshift} is_oper;
typedef enum { var, func }  primaryType;
typedef enum { primary, secondary} factorType;

typedef struct _declaration is_declaration;
typedef struct _variable is_variable;
typedef struct _expression is_expression;
typedef struct _term is_term;



/* Cicles */
typedef struct _for is_for;
typedef struct _doWhile is_do_while;
typedef struct _while is_while;
typedef struct _switch is_switch;

/* Variable */


struct _variable{
	unsignedVariableType type;
	union{
		int _int;
		char _char;
		float _float;
		double _double;
		int _boolean;
	}variableType;
};

/* Declaration */

struct _declaration{
	int linha;
	unsignedVariableType type;
	is_identifier_list *list;
	is_expression *expression;
	
};

/* Expressions */

struct _factor{
	is_sign *sign;


};

struct _term{
	is_factor *factor;
	
};


struct _expression{
	is_term *term;
	is_oper operation;
				

};


/* for(i;i<n;i++); */

struct _for {
	

};


