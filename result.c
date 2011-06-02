#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "frame.h"

int main(){
int _ra;
frame* sp=NULL;
frame* fp=NULL;
/*Global variables */
int g0;

/*BLOCO MAIN */
sp=(frame*)malloc(sizeof(frame));

/*Operation list*/
int temp0 = 10;
g0 = temp0;
sp->locals[4]=(int *)malloc(sizeof(int));
int temp1 = (*((int*)sp->locals[4]));
int temp2 = 1;
if(temp1 == temp2) goto

/*FUNCTION BLOCK gcd */
/*Prologue*/
goto gcdskip;

gcd:
fp=sp;
sp=(frame*)malloc(sizeof(frame));
sp->parent=fp;
sp->return_address=_ra;
/*Function Body */

/*Arguments */
/*Argument a - a */
sp->locals[0]=(int *)malloc(sizeof(int));
/*Argument b - b */
sp->locals[1]=(int *)malloc(sizeof(int));
sp->locals[2]=(double *)malloc(sizeof(double));
(*((double*)sp->locals[2]))++;
sp->locals[3]=(int *)malloc(sizeof(int));
/*Epilogue */
_ra=sp->return_address;
sp=sp->parent;
fp=sp->parent;
goto redirector;

gcdskip:
/*Redirector*/
goto exit;
redirector:
exit:
;
}

