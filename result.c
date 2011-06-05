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
/*Declaration of variable - temp*/
sp->locals[2]=(double *)malloc(sizeof(double));
double temp0 = 1.900000;
(*((double*)sp->locals[2])) = temp0;
/*Unary operation of variable - temp*/
(*((double*)sp->locals[2]))++;
/*Declaration of variable - c*/
sp->locals[3]=(int *)malloc(sizeof(int));
int temp1 = 1;
(*((int*)sp->locals[3])) = temp1;
int temp2 = (*((int*)sp->locals[3]));
int temp3 = 2;
if(temp2 != temp3) goto ELSE0;
/*Assignment to variable - temp*/
double temp4 = 1.000000;
(*((double*)sp->locals[2])) = temp4;
ELSE0:
/*Epilogue */
_ra=sp->return_address;
sp=sp->parent;
fp=sp->parent;
goto redirector;

gcdskip:

/*BLOCO MAIN */
sp=(frame*)malloc(sizeof(frame));

/*Operation list*/
/*Declaration of variable - a*/
sp->locals[4]=(int *)malloc(sizeof(int));
int temp5 = 1;
(*((int*)sp->locals[4])) = temp5;
int temp6 = (*((int*)sp->locals[4]));
if( !temp6) goto ELSE1;
/*Unary operation of variable - a*/
(*((int*)sp->locals[4]))++;
goto ENDIF0;
ELSE1:
int temp7 = (*((int*)sp->locals[4]));
int temp8 = 1;
if(temp7 != temp8) goto ELSE2;
/*Unary operation of variable - a*/
(*((int*)sp->locals[4]))--;
ELSE2:
ENDIF0:
int temp9 = (*((int*)sp->locals[4]));
printf("%d\n",temp9);
/*Redirector*/
goto exit;
redirector:
exit:
;
return 0;
}

