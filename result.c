#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "frame.h"

int main(){
int _ra;
frame* sp=NULL;
frame* fp=NULL;
/*Global variables */

/*FUNCTION BLOCK factorial */
/*Prologue*/
goto factorialskip;

factorial:
fp=sp;
sp=(frame*)malloc(sizeof(frame));
sp->parent=fp;
sp->return_address=_ra;
/*Function Body */

/*Arguments */

/*Argument n - n */
sp->locals[0]=(int *)malloc(sizeof(int));
(*((int*)sp->locals[0]))= (*((int*)sp->parent->outgoing[0]));
/* CONDITION STATEMENT */
int temp0 = (*((int*)sp->locals[0]));
int temp1 = 1;
if(temp0 != temp1) goto ELSE0;
int temp2 = (*((int*)sp->locals[0]));
sp->parent->return_value = (int*)malloc(sizeof(int));
(*((int*) sp->parent->return_value)) = temp2;
goto ENDFUNCfactorial;
ELSE0:
;
int temp3 = (*((int*)sp->locals[0]));
int temp4 = 1;
int temp5 =  temp3 - temp4;
sp->outgoing[0] = (int*)malloc(sizeof(int));
(*((int*)sp->outgoing[0])) = temp5;
_ra=0;
goto factorial;
return0:
;
int temp6 = (*((int*)sp->return_value));
int temp7 = (*((int*)sp->locals[0]));
int temp8 =  temp6 * temp7;
sp->parent->return_value = (int*)malloc(sizeof(int));
(*((int*) sp->parent->return_value)) = temp8;
goto ENDFUNCfactorial;
/*Epilogue */
ENDFUNCfactorial:
_ra=sp->return_address;
sp=sp->parent;
fp=sp->parent;
goto redirector;

factorialskip:

/*BLOCO MAIN */
sp=(frame*)malloc(sizeof(frame));

/*Operation list*/
int temp9 = 6;
sp->outgoing[0] = (int*)malloc(sizeof(int));
(*((int*)sp->outgoing[0])) = temp9;
_ra=1;
goto factorial;
return1:
;
int temp10 = (*((int*)sp->return_value));
printf("%d\n",temp10);

/*Redirector*/
goto exit;
redirector:
if(_ra==0) goto return0;
if(_ra==1) goto return1;
exit:
;
return 0;
}

