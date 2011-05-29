#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structures.h"
#include "symbol_table.h"
#include "semantics.h"
#include "translate.h"


FILE *dest;

void translate_program(is_program *program, prog_env *pe){
    
    fflush(stdout);
    dest = fopen("result.c", "w");

    if (!dest){
            printf("Error opening file!\n");
            return;
    }
    translate_header();
    translate_global_list(pe->global);
    
}


void translate_header(){
    
    fprintf(dest, "#include <stdio.h>\n");
    fprintf(dest, "#include <stdlib.h>\n");
    fprintf(dest, "#include <string.h>\n");
    fprintf(dest, "#include \"frame.h\"\n\n");
    
    fprintf(dest, "frame* sp=NULL;\n");
    fprintf(dest, "frame* fp=NULL;\n");
    fflush(dest);
    
    
    
}

void translate_global_list(table_element *variables){
    
    table_element *table = variables;
    
    for(;table != NULL; table = table->next){
        translate_global_var(table);
    }
    
}

void translate_global_var(table_element *var){
    
    switch(var->type){
        
        case is_char:
            fprintf(dest,"char g%d;\n",var->offset);
            break;
        case is_int:
            fprintf(dest,"int g%d;\n",var->offset);
            break;
        case is_boolean:
            fprintf(dest,"int g%d;\n",var->offset);
            break;
        case is_double:
            fprintf(dest,"double g%d;\n",var->offset);
            break;
        case is_string:
            fprintf(dest,"char *g%d;\n",var->offset);
            break;
        default:
        break;       
    }
    
}