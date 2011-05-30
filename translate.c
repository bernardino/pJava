#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structures.h"
#include "symbol_table.h"
#include "semantics.h"
#include "translate.h"


FILE *dest;

void translate_program(is_program *program, prog_env *pe) {

    fflush(stdout);
    dest = fopen("result.c", "w");

    if (!dest) {
        printf("Error opening file!\n");
        return;
    }

    translate_header();
    translate_global_list(pe->global);
    translate_main(pe, program->main);
    translate_function_list(pe, program->function_list);
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

void translate_footer(){
	translate_redirector();
	fprintf(dest, "}\n\n");
}

void translate_redirector(){
	int i;
	fprintf(dest, "/*Redirector*/\n");
	fprintf(dest, "goto exit;\n");
	fprintf(dest, "redirector:\n");

	/*for(i=0; i<returncounter; i++)				//Para cada endereco de retorno, sua label associada
		{
		fprintf(dest, "if(_ra==%d) goto return%d;\n", i, i);
		}*/
	fprintf(dest, "exit:\n;\n");
}

void translate_global_list(table_element *variables) {
    
    fprintf(dest, "/*Global variables */\n");

    table_element *table = variables;

    for (; table != NULL; table = table->next) {
        translate_global_var(table);
    }

}

void translate_global_var(table_element *var) {

    switch (var->type) {

        case is_char:
            fprintf(dest, "char g%d;\n", var->offset);
            break;
        case is_int:
            fprintf(dest, "int g%d;\n", var->offset);
            break;
        case is_boolean:
            fprintf(dest, "int g%d;\n", var->offset);
            break;
        case is_double:
            fprintf(dest, "double g%d;\n", var->offset);
            break;
        case is_string:
            fprintf(dest, "char *g%d;\n", var->offset);
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
    fprintf(dest, "goto %sskip;\n", function->id); //Instrucao para nao executar este codigo quando o main for corrido da primeira vez, apenas para o nosso codigo C restringido 
    fprintf(dest, "%s:\n", function->id); //Label do procedimento	
    fprintf(dest, "fp=sp;\n"); //Guarda do endereco da frame anterior (sp), no frame pointer (fp)
    fprintf(dest, "sp=(frame*)malloc(sizeof(frame));\n"); //Criacao de uma nova frame, identificada com com o Stack Pointer (sp)
    fprintf(dest, "sp->parent=fp;\n"); //Guarda do endereco para a frame anterior, na propria frame
    fprintf(dest, "sp->return_address=_ra;\n"); //Guarda do endereco de retorno (por norma existente no registo _ra), na frame


    fprintf(dest, "/*Function Body */\n");

    translate_argument_list(pe, env, function->argument_list);

    translate_operation_list(pe, env, function->code->operation_list);

    fprintf(dest, "/*Epilogue */\n");
    fprintf(dest, "_ra=sp->return_address;\n"); //Restauro do valor de retorno, a ser utilizando aquando do redireccionamento do fluxo
    fprintf(dest, "sp=sp->parent;\n"); //"pop" da pilha de frames
    fprintf(dest, "fp=sp->parent;\n"); //actualizacao do registo FP de acordo
    fprintf(dest, "goto redirector;\n"); //Instrucao especifica para a nossa implementacao em C "restringido"
    fprintf(dest, "%sskip:\n", function->id); //label para acesso a  instruccao seguinte ao codigo do procedimento (para evitar ser executado inadvertidamente)

}

void translate_argument_list(prog_env *pe, environment_list *env, is_argument_list *list) {

    table_element *variables = env->locals;

    fprintf(dest, "\n/*Arguments */\n");

    is_argument_list *aux = list;

    for (; aux != NULL; aux = aux->next) {
        translate_argument(pe, variables, aux->argument);
        variables = variables->next;
    }
}

void translate_argument(prog_env *pe, table_element *variable, is_argument *arg) {

    fprintf(dest, "/*Argument %s - %s */\n", arg->id, variable->name);

    translate_variable(variable);

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
            translate_assignment(pe,env,operation->oper.assignment);
            break;
        case is_funct:
            /*translate_function_call(pe,env,env->locals,is_void,operation->oper.function,0);*/
            break;
        case is_un:
            /*translate_unary(pe,env,env->locals,operation->oper.unary);*/
            break;
        case is_cyc:
            /*translate_cycle(pe,env,env->locals,operation->oper.cycle);*/
            break;
        case is_cond:
            /*translate_condition(pe,env,env->locals,operation->oper.condition);*/
            break;
        case is_cont:
            /*translate_control(pe,env,env->locals,operation->oper.control);*/
            break;
    }
}

void translate_declaration(prog_env *pe, environment_list *env, is_declaration *dec) {

    translate_variable_list(pe, env, dec->variable_list, dec->type);

}

void translate_variable_list(prog_env *pe, environment_list *env, is_variable_list *list, unsignedVariableType type) {

    is_variable_list *aux = list;

    for (; aux != NULL; aux = aux->next) {
        translate_variable(lookupElement(env->locals, aux->variable->id));
    }

}

void translate_assignment(prog_env *pe, environment_list *env, is_assignment *assign){
    
    
    
}

void translate_main(prog_env *pe, is_main *main) {

    environment_list *env = lookupEnvironment(pe->procs, "Main");


    translate_operation_list(pe, env, main->code->operation_list);


}