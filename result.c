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
/* CONDITION STATEMENT */
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

/*Declaration of variable - i*/
sp->locals[5]=(int *)malloc(sizeof(int));
int temp6 = 0;
(*((int*)sp->locals[5])) = temp6;
/* CYCLE STATEMENT */
CYCLE0:
int temp7 = (*((int*)sp->locals[5]));
int temp8 = 10;
if(temp7 >= temp8) goto ENDCYCLE0;
/* CYCLE STATEMENT */
CYCLE1:
int temp9 = (*((int*)sp->locals[5]));
int temp10 = 10;
if(temp9 <= temp10) goto ENDCYCLE1;

/*Unary operation of variable - i*/
(*((int*)sp->locals[5]))++;
goto CYCLE1;
ENDCYCLE1:

/*Unary operation of variable - i*/
(*((int*)sp->locals[5]))++;
goto CYCLE0;
ENDCYCLE0:
/* CYCLE STATEMENT */
/* For Init*/

/*Assignment to variable - i*/
int temp11 = 0;
(*((int*)sp->locals[5])) = temp11;
CYCLE2:
int temp12 = (*((int*)sp->locals[5]));
int temp13 = 10;
if(temp12 >= temp13) goto ENDCYCLE2;
goto ENDCYCLE2;

/*Unary operation of variable - i*/
(*((int*)sp->locals[5]))++;
goto CYCLE2;
ENDCYCLE2:

/*Redirector*/
goto exit;
redirector:
exit:
;
return 0;
}

