#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structures.h"
#include "symbol_table.h"
#include "semantics.h"
#include "translate.h"


FILE *dest;
int temp = 0;
int returncounter = 0, blockcounter = 0;
int ifblock = 0, switchblock = 0, cycleblock = 0;
int boolif = 1;
int printed = 0;
int label;
int outsideLoop = 1;
int internalIf = 0;
unsignedVariableType actualTemp = is_void;

void translate_program(is_program *program, prog_env *pe) {

    fflush(stdout);
    dest = fopen("result.c", "w");

    if (!dest) {
        printf("Error opening file!\n");
        return;
    }

    translate_header();
    translate_global_list(pe, pe->procs, program->variable_list);
    translate_function_list(pe, program->function_list);
    translate_main(pe, program->main);
    translate_footer();
}

void translate_header() {

    fprintf(dest, "#include <stdio.h>\n");
    fprintf(dest, "#include <stdlib.h>\n");
    fprintf(dest, "#include <string.h>\n");
    fprintf(dest, "#include \"frame.h\"\n\n");
    fprintf(dest, "int main(){\n");
    fprintf(dest, "int _ra;\n");
    fprintf(dest, "frame* sp=NULL;\n");
    fprintf(dest, "frame* fp=NULL;\n");
    fflush(dest);

}

void translate_footer() {
    translate_redirector();
    fprintf(dest, "return 0;\n}\n\n");
}

void translate_redirector() {
    int i;
    fprintf(dest, "\n/*Redirector*/\n");
    fprintf(dest, "goto exit;\n");
    fprintf(dest, "redirector:\n");

    for (i = 0; i < returncounter; i++) //Para cada endereco de retorno, sua label associada
    {
        fprintf(dest, "if(_ra==%d) goto return%d;\n", i, i);
    }
    fprintf(dest, "exit:\n;\n");
}

void translate_global_list(prog_env *pe, environment_list *env, is_global_list *list) {

    fprintf(dest, "/*Global variables */\n");

    is_global_list *aux = list;
    is_variable *var;
    table_element *el;


    for (; aux != NULL; aux = aux->next) {
        var = aux->dec->declaration->variable_list->variable;
        el = lookupElement(pe->global, var->id);
        if (var->expression) {
            translate_expression(pe, env, var->expression);
            translate_global_var(el);
            fprintf(dest, " = temp%d;\n", temp - 1);
        } else {
            translate_global_var(el);
            fprintf(dest, ";\n");
        }
    }

}

void translate_global_var(table_element *var) {

    switch (var->type) {

        case is_char:
            fprintf(dest, "char g%d", var->offset);
            break;
        case is_int:
            fprintf(dest, "int g%d", var->offset);
            break;
        case is_boolean:
            fprintf(dest, "int g%d", var->offset);
            break;
        case is_double:
            fprintf(dest, "double g%d", var->offset);
            break;
        case is_string:
            fprintf(dest, "char *g%d", var->offset);
            break;
        default:
            break;
    }

}

void translate_function_list(prog_env *pe, is_function_list *list) {

    is_function_list *aux = list;

    for (; aux != NULL; aux = aux->next) {
        translate_function(pe, aux->function);
    }
}

void translate_function(prog_env *pe, is_function *function) {

    environment_list *env = lookupEnvironment(pe->procs, function->id);

    fprintf(dest, "\n/*FUNCTION BLOCK %s */\n", function->id);
    fprintf(dest, "/*Prologue*/\n");
    fprintf(dest, "goto %sskip;\n\n", function->id); //Instrucao para nao executar este codigo quando o main for corrido da primeira vez, apenas para o nosso codigo C restringido 
    fprintf(dest, "%s:\n", function->id); //Label do procedimento	
    fprintf(dest, "fp=sp;\n"); //Guarda do endereco da frame anterior (sp), no frame pointer (fp)
    fprintf(dest, "sp=(frame*)malloc(sizeof(frame));\n"); //Criacao de uma nova frame, identificada com com o Stack Pointer (sp)
    fprintf(dest, "sp->parent=fp;\n"); //Guarda do endereco para a frame anterior, na propria frame
    fprintf(dest, "sp->return_address=_ra;\n"); //Guarda do endereco de retorno (por norma existente no registo _ra), na frame


    fprintf(dest, "/*Function Body */\n");

    translate_argument_list(pe, env, function->argument_list);
    translate_operation_list(pe, env, function->code->operation_list);

    fprintf(dest, "/*Epilogue */\n");
    fprintf(dest, "ENDFUNC%s:\n", function->id);
    fprintf(dest, "_ra=sp->return_address;\n"); //Restauro do valor de retorno, a ser utilizando aquando do redireccionamento do fluxo
    fprintf(dest, "sp=sp->parent;\n"); //"pop" da pilha de frames
    fprintf(dest, "fp=sp->parent;\n"); //actualizacao do registo FP de acordo
    fprintf(dest, "goto redirector;\n"); //Instrucao especifica para a nossa implementacao em C "restringido"
    fprintf(dest, "\n%sskip:\n", function->id); //label para acesso a  instruccao seguinte ao codigo do procedimento (para evitar ser executado inadvertidamente)

}

void translate_argument_list(prog_env *pe, environment_list *env, is_argument_list *list) {

    table_element *variables = env->locals;

    fprintf(dest, "\n/*Arguments */\n");

    is_argument_list *aux = list;
    int outgoing = 0;
    for (; aux != NULL; aux = aux->next) {
        translate_argument(pe, variables, aux->argument, outgoing++);
        variables = variables->next;
    }
}

void translate_argument(prog_env *pe, table_element *variable, is_argument *arg, int outgoing) {

    fprintf(dest, "\n/*Argument %s - %s */\n", arg->id, variable->name);

    translate_variable(variable);
    translate_local_variable(variable);
    fprintf(dest, "= (*((");
    convertType(variable->type);
    fprintf(dest, "*)sp->parent->outgoing[%d]));\n", outgoing);

}

void translate_variable(table_element *var) {

    switch (var->type) {
        case is_char:
            fprintf(dest, "sp->locals[%d]=(char *)malloc(sizeof(char));\n", var->offset);
            break;
        case is_int:
            fprintf(dest, "sp->locals[%d]=(int *)malloc(sizeof(int));\n", var->offset);
            break;
        case is_boolean:
            fprintf(dest, "sp->locals[%d]=(int *)malloc(sizeof(int));\n", var->offset);
            break;
        case is_double:
            fprintf(dest, "sp->locals[%d]=(double *)malloc(sizeof(double));\n", var->offset);
            break;
        case is_string:
            fprintf(dest, "sp->locals[%d]=(char *)malloc(sizeof(char)*200);\n", var->offset);
            break;
        default:
            break;
    }

}

void translate_operation_list(prog_env *pe, environment_list *env, is_operation_list *list) {

    is_operation_list *aux = list;

    for (; aux != NULL; aux = aux->next) {
        translate_operation(pe, env, aux->operation);
    }
}

void translate_operation(prog_env *pe, environment_list *env, is_operation *operation) {
    switch (operation->type) {
        case is_dec:
            translate_declaration(pe, env, operation->oper.declaration);
            break;
        case is_assign:
            translate_assignment(pe, env, operation->oper.assignment);
            break;
        case is_funct:
            translate_function_call(pe, env, operation->oper.function);
            break;
        case is_un:
            translate_unary(pe, env, operation->oper.unary);
            break;
        case is_cyc:
            translate_cycle(pe, env, operation->oper.cycle);
            break;
        case is_cond:
            translate_condition(pe, env, operation->oper.condition);
            break;
        case is_cont:
            translate_control(pe, env, operation->oper.control);
            break;
    }
}

void translate_declaration(prog_env *pe, environment_list *env, is_declaration *dec) {

    translate_variable_list(pe, env, dec->variable_list, dec->type);

}

void translate_variable_list(prog_env *pe, environment_list *env, is_variable_list *list, unsignedVariableType type) {

    is_variable_list *aux = list;
    table_element *el;
    int ret;
    for (; aux != NULL; aux = aux->next) {
        fprintf(dest, "\n/*Declaration of variable - %s*/\n", aux->variable->id);
        el = lookupElement(env->locals, aux->variable->id);
        translate_variable(el);
        if (aux->variable->expression != NULL) {
            ret = translate_expression(pe, env, aux->variable->expression);
            translate_local_variable(el);
            fprintf(dest, " = temp%d;\n", temp - 1);
        }
    }
}

void translate_unary(prog_env *pe, environment_list *env, is_unary *unary) {

    table_element *el = NULL;
    environment_list *aux = env;
    fprintf(dest, "\n/*Unary operation of variable - %s*/\n", unary->id);
    el = lookupLocalVar(env, unary->id);


    if (el) {
        /* LOCAL VARIABLE*/
        translate_local_variable(el);
        fprintf(dest, " = ");
        translate_local_variable(el);

    } else {
        /* GLOBAL VARIABLE*/
        el = lookupElement(pe->global, unary->id);
        fprintf(dest, "g%d = g%d", el->offset,el->offset);

    }
    if (unary->type == is_before_plus || unary->type == is_after_plus)
        fprintf(dest, " + 1;\n");
    else
        fprintf(dest, " - 1;\n");
}

table_element* lookupLocalVar(environment_list *env, char *id) {

    table_element *el = NULL;
    environment_list *aux = env;
    while (el == NULL && aux != NULL) {
        el = lookupElement(aux->locals, id);
        if (!el) {
            aux = aux->father;
        }
    }
    return el;

}

void translate_assignment(prog_env *pe, environment_list *env, is_assignment *assign) {

    table_element *el = NULL;
    environment_list *aux = env;
    fprintf(dest, "\n/*Assignment to variable - %s*/\n", assign->id);
    el = lookupLocalVar(env, assign->id);

    if (el) {
        /* LOCAL VARIABLE */
        translate_expression(pe, aux, assign->expression);
        translate_local_variable(el);


        if (assign->type != is_ASS_EQ) {
            fprintf(dest, " = ");
            translate_local_variable(el);
        }
        translate_assignment_operator(assign->type);


    } else {
        /*GLOBAL VARIABLE*/
        el = lookupElement(pe->global, assign->id);
        translate_expression(pe, aux, assign->expression);
        fprintf(dest, "g%d", el->offset);

        if (assign->type != is_ASS_EQ) {
            fprintf(dest, " = ");
            fprintf(dest, "g%d", el->offset);
        }
        translate_assignment_operator(assign->type);
    }


    fprintf(dest, "temp%d;\n", temp - 1);

}

void translate_local_variable(table_element *el) {
    switch (el->type) {
        case is_char:
            fprintf(dest, "(*((char*)sp->locals[%d]))", el->offset);
            break;
        case is_int:
            fprintf(dest, "(*((int*)sp->locals[%d]))", el->offset);
            break;
        case is_boolean:
            fprintf(dest, "(*((int*)sp->locals[%d]))", el->offset);
            break;
        case is_double:
            fprintf(dest, "(*((double*)sp->locals[%d]))", el->offset);
            break;
        case is_string:
            fprintf(dest, "(*((char**)sp->locals[%d]))", el->offset);
            break;
        default:
            break;

    }
}

void translate_assignment_operator(assignmentType type) {

    switch (type) {
        case is_ASS_EQ:
            fprintf(dest, " = ");
            break;
        case is_ASS_ADD:
            fprintf(dest, " + ");
            break;
        case is_ASS_SUB:
            fprintf(dest, " - ");
            break;
        case is_ASS_MUL:
            fprintf(dest, " * ");
            break;
        case is_ASS_DIV:
            fprintf(dest, " / ");
            break;
        case is_ASS_AND:
            fprintf(dest, " & ");
            break;
        case is_ASS_PERC:
            fprintf(dest, " %% ");
            break;
        case is_ASS_LS:
            fprintf(dest, " << ");
            break;
        case is_ASS_RS:
            fprintf(dest, " >> ");
            break;
    }
}

table_element* translate_value(prog_env *pe, environment_list *env, is_value *value) {

    switch (value->type) {
        case is_char:
            fprintf(dest, "char temp%d = '%c';\n", temp++, value->valueType._char);
            break;
        case is_int:
            fprintf(dest, "int temp%d = %d;\n", temp++, value->valueType._int);
            break;
        case is_boolean:
            fprintf(dest, "int temp%d = %d;\n", temp++, value->valueType._boolean);
            break;
        case is_double:
            fprintf(dest, "double temp%d = %lf;\n", temp++, value->valueType._double);
            break;
        case is_string:
            fprintf(dest, "char *temp%d = \"%s\";\n", temp++, value->valueType._string);
            break;
        case is_ident:
            ;
            table_element *element = lookupLocalVar(env, value->valueType._string);
            if (element != NULL) {
                convertType(element->type);
                fprintf(dest, " temp%d = ", temp++);
                translate_local_variable(element);
                fprintf(dest, ";\n");
            } else {
                element = lookupElement(pe->global, value->valueType._string);
                convertType(element->type);
                fprintf(dest, " temp%d = g%d;\n", temp++, element->offset);
            }
            actualTemp = element->type;
            return element;
            break;
        default:
            break;
    }
    actualTemp = value->type;
    return NULL;

}

void convertType(unsignedVariableType type) {
    switch (type) {
        case is_char:
            fprintf(dest, "char");
            break;
        case is_int:
            fprintf(dest, "int");
            break;
        case is_boolean:
            fprintf(dest, "int");
            break;
        case is_double:
            fprintf(dest, "double");
            break;
        case is_string:
            fprintf(dest, "char*");
            break;
        default:
            break;
    }

}

void translate_unary_expression(prog_env *pe, environment_list *env, is_unary *unary) {

    table_element *var = lookupLocalVar(env, unary->id);

    if (var) {

        if (unary->type == is_before_plus || unary->type == is_before_minus) {
            translate_unary(pe, env, unary);
        }
        convertType(var->type);
        fprintf(dest, " temp%d = ", temp++);
        translate_local_variable(var);
        fprintf(dest, ";\n");

        if (unary->type == is_after_plus || unary->type == is_after_minus) {
            translate_unary(pe, env, unary);
        }
    } else {
        if (unary->type == is_before_plus || unary->type == is_before_minus) {
            translate_unary(pe, env, unary);
        }
        var = lookupElement(pe->global, unary->id);
        convertType(var->type);
        fprintf(dest, " temp%d = g%d;\n", temp++, var->offset);
        if (unary->type == is_after_plus || unary->type == is_after_minus) {
            translate_unary(pe, env, unary);
        }
    }



}

int translate_expression(prog_env *pe, environment_list *env, is_expression *exp) {
    if(exp != NULL){
        switch (exp->type) {
            case is_val:
                translate_value(pe, env, exp->exp.value);
                return temp - 1;
                break;
            case is_infix:
                translate_infix_expression(pe, env, exp->exp.infix);
                return temp - 1;
                break;
            case is_funct_call:
                translate_function_call(pe, env, exp->exp.function);
                return temp - 1;
                break;
            case is_exp:
                return translate_expression(pe, env, exp->exp.expression);
                break;
                /*case is_if_exp:
                    translate_if_expression(pe, env, exp->exp.if_expression);
                    break;*/
            case is_unary_exp:
                translate_unary_expression(pe, env, exp->exp.unary);
                return temp - 1;
                break;
            default:
                break;
        }
    }
    else{
            fprintf(dest,"ola ola\n");
    }

}

void translate_infix_expression(prog_env *pe, environment_list *env, is_infix_expression *exp) {

    int p1 = translate_expression(pe, env, exp->exp1);
    translate_expression(pe, env, exp->exp2);

    if (actualTemp != is_void) {
        convertType(actualTemp);
        fprintf(dest, " temp%d = ", temp);
        fprintf(dest, " temp%d", p1);

        switch (exp->oper) {
            case is_plus:
                fprintf(dest, " + ");
                break;
            case is_minus:
                fprintf(dest, " - ");
                break;
            case is_mult:
                fprintf(dest, " * ");
                break;
            case is_div:
                fprintf(dest, " / ");
                break;
            case is_and:
                fprintf(dest, " & ");
                break;
            case is_percent:
                fprintf(dest, " %% ");
                break;
            case is_lshift:
                fprintf(dest, " << ");
                break;
            case is_rshift:
                fprintf(dest, " >> ");
                break;
        }

        fprintf(dest, "temp%d;\n", temp - 1);

        temp++;
    }

}

void translate_function_call(prog_env *pe, environment_list *env, is_function_call *call) {

    translate_parameter_list(pe, env, call->parameter_list);

    fprintf(dest, "_ra=%d;\n", returncounter); //guarda de endereco de retorno
    fprintf(dest, "goto %s;\n", call->id); //Salto para codigo do procedimento
    fprintf(dest, "return%d:\n;\n", returncounter); //label de retorno
    returncounter++;

    actualTemp = lookupEnvironment(pe->procs, call->id)->returnType;

    convertType(actualTemp);
    fprintf(dest, " temp%d = (*((", temp++);
    convertType(actualTemp);
    fprintf(dest, "*)sp->return_value));\n");


}

void translate_parameter_list(prog_env *pe, environment_list*env, is_parameter_list *list) {

    is_parameter_list *aux = list;
    int ret, outgoing = 0;
    for (; aux != NULL; aux = aux->next) {
        ret = translate_expression(pe, env, aux->expression);

        fprintf(dest, "sp->outgoing[%d] = (", outgoing);
        convertType(actualTemp);
        fprintf(dest, "*)malloc(sizeof(");
        convertType(actualTemp);
        fprintf(dest, "));\n");

        fprintf(dest, "(*((");
        convertType(actualTemp);
        fprintf(dest, "*)sp->outgoing[%d])) = temp%d;\n", outgoing++, ret);
        actualTemp = is_void;

    }

}

int translate_if_expression_double(prog_env *pe, environment_list *env, is_if *st, is_if_expression *exp1, is_if_expression *exp2, if_exp_type type){
    
    int temp11,temp12, temp21,temp22;
    int internal;
    if(exp1->type != is_OP_LOR && exp1->type != is_OP_LAND && exp2->type != is_OP_LOR && exp2->type != is_OP_LAND){
        if (exp1->type != is_iden) {
            
            fprintf(dest, "int temp%d = 0;\n",temp);
            internal = temp++;
            
            temp11 = translate_expression(pe, env, exp1->exp1);
            temp12  = translate_expression(pe, env, exp1->exp2);
            
            temp21 = translate_expression(pe, env, exp2->exp1);
            temp22 = translate_expression(pe, env, exp2->exp2);
            
            
            fprintf(dest, "if( temp%d", temp11);
            
            invertOperator(exp1->type);
            
            fprintf(dest, "temp%d", temp12);
            
            invertOperator(type);
            fprintf(dest, "temp%d",temp21);
            invertOperator(exp2->type);
            fprintf(dest, "temp%d ) goto nextif%d;\n",temp22,internalIf);
            
            fprintf(dest, "temp%d = 1;\n",internal);
            
            fprintf(dest, "nextif%d:\n;\n",internalIf++);
            
            return internal;
            
            
        }
        
    }
    else if(exp1->type == is_OP_LOR || exp1->type == is_OP_LAND){
        internal = translate_if_expression_double(pe,env,st,exp1->if_exp1, exp1->if_exp2,exp1->type);   
        
        temp11 = translate_expression(pe, env, exp2->exp1);
        temp12  = translate_expression(pe, env, exp2->exp2);
        
        
        fprintf(dest, "int temp%d = 0;\n",temp);
        int t = temp++;
        
        fprintf(dest, "if(!temp%d && ", internal);
        fprintf(dest, "(temp%d", temp11);   
        invertOperator(exp2->type);
        fprintf(dest, "temp%d)) goto nextif%d;\n", temp12, internalIf);
        fprintf(dest, "temp%d = 1;\n",t);
        fprintf(dest, "nextif%d:\n;\n",internalIf++);
        return t;
    }
    
    
    
}

void translate_if_expression(prog_env *pe, environment_list *env, is_if *st) {
    is_if_expression *exp = st->expression;
    int temporary, internal;
    if(exp->type == is_OP_LOR || exp->type == is_OP_LAND){
        internal = translate_if_expression_double(pe,env,st,exp->if_exp1, exp->if_exp2, exp->type);
        
        fprintf(dest, "if( !temp%d ) goto ELSEFINAL%d;\n",internal,blockcounter);
        if (st->code->operation_list != NULL)
            translate_operation_list(pe, env, st->code->operation_list);
        else
            translate_operation(pe, env, st->code->operation);
        
        fprintf(dest, "ELSEFINAL%d:\n;\n",blockcounter++);
        
    }
    else{
        if (exp->type != is_iden) {
            int ret = translate_expression(pe, env, exp->exp1);


            int ret1 = translate_expression(pe, env, exp->exp2);

            fprintf(dest, "if(temp%d", ret);
            invertOperator(exp->type);

            fprintf(dest, "temp%d) goto ELSE%d;\n", ret1, blockcounter);
            temporary = blockcounter++;

            if (st->code->operation_list != NULL)
                translate_operation_list(pe, env, st->code->operation_list);
            else
                translate_operation(pe, env, st->code->operation);

            fprintf(dest, "ELSE%d:\n;\n", temporary);


        } else {

            table_element * el = translate_value(pe, env, st->expression->val);

            fprintf(dest, "if( !temp%d", temp - 1);

            fprintf(dest, ") goto ELSE%d;\n", blockcounter);

            temporary = blockcounter++;

            if (st->code->operation_list != NULL)
                translate_operation_list(pe, env, st->code->operation_list);
            else
                translate_operation(pe, env, st->code->operation);

            fprintf(dest, "ELSE%d:\n;\n", temporary);


        }
    }

}

void invertOperator(if_exp_type type) {

    switch (type) {
        case is_OP_BIGGER:
            /* > ----- <=*/
            fprintf(dest, " <= ");
            break;
        case is_OP_LOWER:
            /* < ----- >=*/
            fprintf(dest, " >= ");
            break;
        case is_OP_EQ:
            /* == ----- !=*/
            fprintf(dest, " != ");
            break;
        case is_OP_NE:
            /* != ----- ==*/
            fprintf(dest, " == ");
            break;
        case is_OP_LE:
            /* <= ----- >*/
            fprintf(dest, " > ");
            break;
        case is_OP_GE:
            /* >= ----- <*/
            fprintf(dest, " < ");
            break;
        case is_OP_LOR:
            /* || ----- &&*/
            fprintf(dest, " && ");
            break;
        case is_OP_LAND:
            /* && ----- ||*/
            fprintf(dest, " || ");
            break;
    }

}

translate_condition(prog_env *pe, environment_list *env, is_condition_statement *condition) {

    if (printed == 1) {
        printed = 0;
        boolif = 1;
    }

    fprintf(dest, "/* CONDITION STATEMENT */\n");
    switch (condition->type) {
        case is_if_statement:
            translate_if(pe, env->local_environment, condition->stat.if_statement);
            break;
        case is_if_else_statement:
            translate_if_else(pe, env->local_environment, condition->stat.if_else_statement);
            break;
        case is_switch_statement:
            translate_switch(pe, env->local_environment, condition->stat.switch_statement);
            break;
    }
}

void translate_if(prog_env *pe, environment_list *env, is_if *st) {
    environment_list *aux = lookupByID(env);
    translate_if_expression(pe, aux, st);

}

translate_if_else(prog_env *pe, environment_list *env, is_if_else *st) {

    environment_list *aux = lookupByID(env);
    translate_if_else_expression(pe, aux, st);

}

int translate_if_expression_double_else(prog_env *pe, environment_list *env, is_if_else *st, is_if_expression *exp1, is_if_expression *exp2, if_exp_type type){
    
    int temp11,temp12, temp21,temp22;
    int internal;
    if(exp1->type != is_OP_LOR && exp1->type != is_OP_LAND && exp2->type != is_OP_LOR && exp2->type != is_OP_LAND){
        if (exp1->type != is_iden) {
            
            fprintf(dest, "int temp%d = 0;\n",temp);
            internal = temp++;
            
            temp11 = translate_expression(pe, env, exp1->exp1);
            temp12  = translate_expression(pe, env, exp1->exp2);
            
            temp21 = translate_expression(pe, env, exp2->exp1);
            temp22 = translate_expression(pe, env, exp2->exp2);
            
            
            fprintf(dest, "if( temp%d", temp11);
            
            invertOperator(exp1->type);
            
            fprintf(dest, "temp%d", temp12);
            
            invertOperator(type);
            fprintf(dest, "temp%d",temp21);
            invertOperator(exp2->type);
            fprintf(dest, "temp%d ) goto nextif%d;\n",temp22,internalIf);
            
            fprintf(dest, "temp%d = 1;\n",internal);
            
            fprintf(dest, "nextif%d:\n;\n",internalIf++);
            
            return internal;
            
            
        }
        
    }
    else if(exp1->type == is_OP_LOR || exp1->type == is_OP_LAND){
        internal = translate_if_expression_double_else(pe,env,st,exp1->if_exp1, exp1->if_exp2,exp1->type);   
        
        temp11 = translate_expression(pe, env, exp2->exp1);
        temp12  = translate_expression(pe, env, exp2->exp2);
        
        
        fprintf(dest, "int temp%d = 0;\n",temp);
        int t = temp++;
        
        fprintf(dest, "if(!temp%d && ", internal);
        fprintf(dest, "(temp%d", temp11);   
        invertOperator(exp2->type);
        fprintf(dest, "temp%d)) goto nextif%d;\n", temp12, internalIf);
        fprintf(dest, "temp%d = 1;\n",t);
        fprintf(dest, "nextif%d:\n;\n",internalIf++);
        return t;
    }
    
    
    
}

void translate_if_else_expression(prog_env *pe, environment_list *env, is_if_else *st) {

    is_if_expression *exp = st->expression;
    int temporary, internal;
    if(exp->type == is_OP_LOR || exp->type == is_OP_LAND){
        internal = translate_if_expression_double_else(pe,env,st,exp->if_exp1, exp->if_exp2, exp->type);
        
        fprintf(dest, "if( !temp%d ) goto ELSEFINAL%d;\n",internal,blockcounter);
        if (st->else_code->operation_list != NULL)
            translate_operation_list(pe, env, st->if_code->operation_list);
        else
            translate_operation(pe, env, st->if_code->operation);
        
        fprintf(dest, "ELSEFINAL%d:\n;\n",blockcounter++);
        
    }
    else{
        if (exp->type != is_iden) {

            int ret = translate_expression(pe, env, exp->exp1);


            int ret1 = translate_expression(pe, env, exp->exp2);

            fprintf(dest, "if(temp%d", ret);
            invertOperator(exp->type);

            fprintf(dest, "temp%d) goto ELSE%d;\n", ret1, blockcounter);
            temporary = blockcounter++;

            if (st->if_code->operation_list != NULL)
                translate_operation_list(pe, env, st->if_code->operation_list);
            else
                translate_operation(pe, env, st->if_code->operation);

            fprintf(dest, "goto ENDIF%d;\n", ifblock);

            fprintf(dest, "ELSE%d:\n;\n", temporary);


        } else {

            translate_value(pe, env, st->expression->val);

            fprintf(dest, "if( !temp%d", temp - 1);

            fprintf(dest, ") goto ELSE%d;\n", blockcounter);

            temporary = blockcounter++;

            if (st->if_code->operation_list != NULL)
                translate_operation_list(pe, env, st->if_code->operation_list);
            else
                translate_operation(pe, env, st->if_code->operation);

            fprintf(dest, "goto ENDIF%d;\n", ifblock);

            fprintf(dest, "ELSE%d:\n;\n", temporary);


        }
    }
    
    if (st->else_code) {
        if (st->else_code->operation_list != NULL) {
            translate_operation_list(pe, env->father, st->else_code->operation_list);
        } else {
            translate_operation(pe, env->father, st->else_code->operation);
        }
    }

    if (boolif) {
        fprintf(dest, "ENDIF%d:\n;\n", ifblock);
        ifblock++;
        boolif = 0;
        printed = 1;
    }
}

environment_list* lookupByID(environment_list *env) {
    environment_list *aux = env;

    while (aux->child_id != blockcounter) {
        aux = aux->next;
    }
    return aux;
}

void translate_control(prog_env *pe, environment_list *env, is_control *control) {

    environment_list *aux = env;

    switch (control->type) {
        case is_break:
            while (1) {
                if (aux->type == loop_for || aux->type == loop_while || aux->type == loop_do) {
                    fprintf(dest, "goto ENDCYCLE%d;\n", label);
                    return;
                } else if (aux->type == if_switch) {
                    fprintf(dest, "goto ENDSWITCH%d;\n", label);
                    return;
                }
                aux = aux->father;
            }
            break;
        case is_continue:
            while (1) {
                if (aux->type == loop_for || aux->type == loop_while || aux->type == loop_do) {
                    fprintf(dest, "goto CYCLE%d;\n", label);
                    return;
                }
                aux = aux->father;
            }
            break;
        case is_return:
            fprintf(dest, "goto ENDFUNC%s;\n", env->name);
            break;
        case is_return_exp:
            translate_return(pe, env, control);
            break;
        case is_println:
            translate_expression(pe, env, control->expression);
            fprintf(dest, "printf(\"");
            printType();
            fprintf(dest, "\\n\",temp%d);\n", temp - 1);
            break;
        case is_print:
            translate_expression(pe, env, control->expression);
            fprintf(dest, "printf(\"");
            printType();
            fprintf(dest, "\",temp%d);\n", temp - 1);

            break;
    }

}

void translate_return(prog_env *pe, environment_list *env, is_control *c) {

    int ret = translate_expression(pe, env, c->expression);

    switch (env->returnType) {
        case is_char:
            fprintf(dest, "sp->parent->return_value = (char*)malloc(sizeof(char));\n");
            break;
        case is_int:
            fprintf(dest, "sp->parent->return_value = (int*)malloc(sizeof(int));\n");
            break;
        case is_boolean:
            fprintf(dest, "sp->parent->return_value = (int*)malloc(sizeof(int));\n");
            break;
        case is_double:
            fprintf(dest, "sp->parent->return_value = (double*)malloc(sizeof(double));\n");
            break;
        case is_string:
            fprintf(dest, "sp->parent->return_value = (char*)malloc(sizeof(char)*200);\n");
            break;
        default:
            break;
    }

    fprintf(dest, "(*((");
    convertType(env->returnType);
    fprintf(dest, "*) sp->parent->return_value)) = temp%d;\n", ret);


    fprintf(dest, "goto ENDFUNC%s;\n", env->name);

}

void printType() {

    switch (actualTemp) {
        case is_char:
            fprintf(dest, "%%c");
            break;
        case is_int:
            fprintf(dest, "%%d");
            break;
        case is_boolean:
            fprintf(dest, "%%d");
            break;
        case is_double:
            fprintf(dest, "%%lf");
            break;
        case is_string:
            fprintf(dest, "%%s");
            break;
        default:
            break;
    }

}

void translate_switch(prog_env *pe, environment_list *env, is_switch *sw) {
    int temporary, localLoop;

    environment_list *aux = lookupByID(env);
    int offset = translate_expression(pe, aux, sw->expression);

    is_switch_case *cases = sw->cases;
    temporary = switchblock++;

    localLoop = outsideLoop;

    if (outsideLoop) {
        outsideLoop = 0;
        label = temporary;
    } else
        label++;

    for (; cases != NULL; cases = cases->next) {
        translate_switch_case(pe, aux, cases, offset);
    }
    fprintf(dest, "ENDSWITCH%d:\n;\n", temporary);

    if (localLoop) {
        outsideLoop = 1;
    } else
        label--;

}

void translate_switch_case(prog_env *pe, environment_list *env, is_switch_case *c, int offset) {

    if (c->type == is_NORMAL) {
        translate_value(pe, env, c->value);
        fprintf(dest, "\nif(temp%d != temp%d) goto ELSE%d;\n", offset, temp - 1, blockcounter);

        int temporary = blockcounter++;

        if (c->operation_list != NULL)
            translate_operation_list(pe, env, c->operation_list);
        fprintf(dest, "ELSE%d:\n;\n", temporary);

    } else {
        if (c->operation_list != NULL)
            translate_operation_list(pe, env, c->operation_list);
    }
}

void translate_cycle(prog_env *pe, environment_list *env, is_cycle *cycle) {

    fprintf(dest, "/* CYCLE STATEMENT */\n");
    switch (cycle->type) {
        case is_for_cycle:
            translate_for(pe, env->local_environment, cycle->cyc.for_cycle);
            break;
        case is_while_cycle:
            translate_while(pe, env->local_environment, cycle->cyc.while_cycle);
            break;
        case is_do_while_cycle:
            translate_do_while(pe, env->local_environment, cycle->cyc.do_while);
            break;
    }

}

void translate_for(prog_env *pe, environment_list *env, is_for *f) {
    int temporary, localLoop;
    environment_list *aux = lookupByID(env);

    blockcounter++;

    translate_init(pe, aux, f->init);
    fprintf(dest, "CYCLE%d:\n;\n", cycleblock);
    translate_cycle_expression(pe, aux, f->if_expression);
    temporary = cycleblock++;

    localLoop = outsideLoop;

    if (outsideLoop) {
        outsideLoop = 0;
        label = temporary;
    } else
        label++;

    if (f->code->operation_list != NULL)
        translate_operation_list(pe, aux, f->code->operation_list);
    else
        translate_operation(pe, aux, f->code->operation);

    translate_increase_list(pe, aux, f->increase);

    fprintf(dest, "goto CYCLE%d;\n", temporary);
    fprintf(dest, "ENDCYCLE%d:\n;\n", temporary);

    if (localLoop) {
        outsideLoop = 1;
    } else
        label--;

}

void translate_increase_list(prog_env *pe, environment_list *env, is_increase_list *list) {

    is_increase_list *aux = list;

    for (; aux != NULL; aux = aux->next) {
        translate_increase(pe, env, aux->inc);
    }
}

void translate_increase(prog_env *pe, environment_list *env, is_increase *inc) {

    switch (inc->type) {
        case is_assign_inc:
            translate_assignment(pe, env, inc->inc.assign);
            break;
        case is_unary_inc:
            translate_unary(pe, env, inc->inc.unary);
            break;
    }


}

void translate_cycle_expression(prog_env *pe, environment_list *env, is_if_expression *_if) {

    if (_if->type != is_iden) {

        int ret = translate_expression(pe, env, _if->exp1);


        int ret1 = translate_expression(pe, env, _if->exp2);

        fprintf(dest, "if(temp%d", ret);
        invertOperator(_if->type);

        fprintf(dest, "temp%d) goto ENDCYCLE%d;\n", ret1, cycleblock);


    } else {

        translate_value(pe, env, _if->val);

        fprintf(dest, "if( !temp%d", temp - 1);

        fprintf(dest, ") goto ENDCYCLE%d;\n", cycleblock);

    }

}

void translate_init(prog_env *pe, environment_list *env, is_for_init *init) {

    fprintf(dest, "/* For Init*/\n");
    switch (init->type) {
        case is_assign_for:
            translate_assignment(pe, env, init->init.assign);
            break;
        case is_dec_for:
            translate_declaration(pe, env, init->init.dec);
            break;
    }
}

void translate_while(prog_env *pe, environment_list *env, is_while *whil) {
    int temporary, localLoop;
    environment_list *aux = lookupByID(env);

    blockcounter++;

    fprintf(dest, "CYCLE%d:\n;\n", cycleblock);
    translate_cycle_expression(pe, aux, whil->if_expression);
    temporary = cycleblock++;

    localLoop = outsideLoop;

    if (outsideLoop) {
        outsideLoop = 0;
        label = temporary;
    } else
        label++;

    if (whil->code->operation_list != NULL)
        translate_operation_list(pe, aux, whil->code->operation_list);
    else
        translate_operation(pe, aux, whil->code->operation);

    fprintf(dest, "goto CYCLE%d;\n", temporary);
    fprintf(dest, "ENDCYCLE%d:\n;\n", temporary);

    if (localLoop) {
        outsideLoop = 1;
    } else
        label--;

}

void translate_do_while(prog_env *pe, environment_list *env, is_do_while *whil) {
    int temporary, localLoop;
    environment_list *aux = lookupByID(env);
    blockcounter++;

    fprintf(dest, "CYCLE%d:\n;\n", cycleblock);
    temporary = cycleblock++;

    localLoop = outsideLoop;

    if (outsideLoop) {
        outsideLoop = 0;
        label = temporary;
    } else
        label++;


    if (whil->code->operation_list != NULL)
        translate_operation_list(pe, aux, whil->code->operation_list);
    else
        translate_operation(pe, aux, whil->code->operation);

    translate_do_while_expression(pe, aux, whil->if_expression, temporary);

    fprintf(dest, "ENDCYCLE%d:\n;\n", temporary);

    if (localLoop) {
        outsideLoop = 1;
    } else
        label--;

}

void translate_do_while_expression(prog_env *pe, environment_list *env, is_if_expression *_if, int temporary) {

    if (_if->type != is_iden) {

        int ret = translate_expression(pe, env, _if->exp1);

        int ret1 = translate_expression(pe, env, _if->exp2);

        fprintf(dest, "if(temp%d", ret);

        logicOperator(_if->type);

        fprintf(dest, "temp%d) goto CYCLE%d;\n", ret1, temporary);


    } else {

        translate_value(pe, env, _if->val);

        fprintf(dest, "if( temp%d", temp - 1);

        fprintf(dest, ") goto CYCLE%d;\n", temporary);

    }

}

void logicOperator(if_exp_type type) {
    switch (type) {
        case is_OP_BIGGER:
            fprintf(dest, " > ");
            break;
        case is_OP_LOWER:
            fprintf(dest, " < ");
            break;
        case is_OP_EQ:
            fprintf(dest, " == ");
            break;
        case is_OP_NE:
            fprintf(dest, " != ");
            break;
        case is_OP_LE:
            fprintf(dest, " <= ");
            break;
        case is_OP_GE:
            fprintf(dest, " >= ");
            break;
        case is_OP_LOR:
            fprintf(dest, " || ");
            break;
        case is_OP_LAND:
            fprintf(dest, " && ");
            break;
    }
}

void translate_main(prog_env *pe, is_main *main) {

    environment_list *env = lookupEnvironment(pe->procs, "Main");

    fprintf(dest, "\n/*BLOCO MAIN */\n");
    fprintf(dest, "sp=(frame*)malloc(sizeof(frame));\n\n");

    fprintf(dest, "/*Operation list*/\n");
    translate_operation_list(pe, env, main->code->operation_list);


}