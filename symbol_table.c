#include "symbol_table.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>

extern table_element* symtab;


/*Insere um novo identificador na cauda de uma lista ligada de simbolo*/
table_element *insert_element(char *str, basic_type t){
	table_element *newSymbol=(table_element*) malloc(sizeof(table_element));
	table_element *aux;
	table_element *previous;

	strcpy(newSymbol->name, str);
	newSymbol->type = t;
	newSymbol->next=NULL;	

	/*Se table ja tem elementos */
	if(symtab){
		/*Procura cauda da lista e verifica se simbolo ja existe */
		for(aux=symtab; aux; previous=aux, aux=aux->next)
			if(strcmp(aux->name, str)==0)
				return NULL;
		/*adiciona ao final da lista*/
		previous->next=newSymbol;
	}
	else{
		/*symtab tem um elemento -> o novo simbolo*/
		symtab=newSymbol;		
	}
	
	return newSymbol; 
}

void show_table(){
	table_element *aux;
	printf("\n");
	for(aux=symtab; aux; aux=aux->next)
		printf("symbol %s, type %d\n", aux->name, aux->type);
}


table_element *search_el(char *str){
	table_element *aux;

	for(aux=symtab; aux; aux=aux->next)
		if(strcmp(aux->name, str)==0)
			return aux;

	return NULL;
}





