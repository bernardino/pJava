#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "frame.h"

int main(){
int _ra;
frame* sp=NULL;
frame* fp=NULL;
/*Global variables */

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
(*((int*)sp->locals[0]))= (*((int*)sp->parent->outgoing[0]));

/*Argument b - b */
sp->locals[1]=(int *)malloc(sizeof(int));
(*((int*)sp->locals[1]))= (*((int*)sp->parent->outgoing[1]));
/* CONDITION STATEMENT */
int temp0 = 0;
int temp1 = (*((int*)sp->locals[0]));
int temp2 = (*((int*)sp->locals[1]));
int temp3 = (*((int*)sp->locals[1]));
int temp4 = 0;
if( temp1 != temp2 && temp3 != temp4 ) goto nextif0;
temp0 = 1;
nextif0:
;
if( !temp0 ) goto ELSEFINAL0;
int temp5 = (*((int*)sp->locals[0]));
sp->parent->return_value = (int*)malloc(sizeof(int));
(*((int*) sp->parent->return_value)) = temp5;
goto ENDFUNCgcd;
ELSEFINAL0:
;
/* CONDITION STATEMENT */
int temp6 = (*((int*)sp->locals[0]));
int temp7 = 0;
if(temp6 != temp7) goto ELSE1;
int temp8 = (*((int*)sp->locals[1]));
sp->parent->return_value = (int*)malloc(sizeof(int));
(*((int*) sp->parent->return_value)) = temp8;
goto ENDFUNCgcd;
goto ENDIF0;
ELSE1:
;
/* CONDITION STATEMENT */
int temp9 = (*((int*)sp->locals[0]));
int temp10 = (*((int*)sp->locals[1]));
if(temp9 <= temp10) goto ELSE2;
int temp11 = (*((int*)sp->locals[0]));
int temp12 = (*((int*)sp->locals[1]));
int temp13 =  temp11 % temp12;
sp->outgoing[0] = (int*)malloc(sizeof(int));
(*((int*)sp->outgoing[0])) = temp13;
int temp14 = (*((int*)sp->locals[1]));
sp->outgoing[1] = (int*)malloc(sizeof(int));
(*((int*)sp->outgoing[1])) = temp14;
_ra=0;
goto gcd;
return0:
;
int temp15 = (*((int*)sp->return_value));
sp->parent->return_value = (int*)malloc(sizeof(int));
(*((int*) sp->parent->return_value)) = temp15;
goto ENDFUNCgcd;
goto ENDIF0;
ELSE2:
;
int temp16 = (*((int*)sp->locals[0]));
sp->outgoing[0] = (int*)malloc(sizeof(int));
(*((int*)sp->outgoing[0])) = temp16;
int temp17 = (*((int*)sp->locals[1]));
int temp18 = (*((int*)sp->locals[0]));
int temp19 =  temp17 % temp18;
sp->outgoing[1] = (int*)malloc(sizeof(int));
(*((int*)sp->outgoing[1])) = temp19;
_ra=1;
goto gcd;
return1:
;
int temp20 = (*((int*)sp->return_value));
sp->parent->return_value = (int*)malloc(sizeof(int));
(*((int*) sp->parent->return_value)) = temp20;
goto ENDFUNCgcd;
ENDIF0:
;
/*Epilogue */
ENDFUNCgcd:
_ra=sp->return_address;
sp=sp->parent;
fp=sp->parent;
goto redirector;

gcdskip:

/*BLOCO MAIN */
sp=(frame*)malloc(sizeof(frame));

/*Operation list*/

/*Declaration of variable - a*/
sp->locals[2]=(int *)malloc(sizeof(int));

/*Declaration of variable - b*/
sp->locals[3]=(int *)malloc(sizeof(int));

/*Assignment to variable - a*/
int temp21 = 315;
(*((int*)sp->locals[2])) = temp21;

/*Assignment to variable - b*/
int temp22 = 1932;
(*((int*)sp->locals[3])) = temp22;
int temp23 = (*((int*)sp->locals[2]));
sp->outgoing[0] = (int*)malloc(sizeof(int));
(*((int*)sp->outgoing[0])) = temp23;
int temp24 = (*((int*)sp->locals[3]));
sp->outgoing[1] = (int*)malloc(sizeof(int));
(*((int*)sp->outgoing[1])) = temp24;
_ra=2;
goto gcd;
return2:
;
int temp25 = (*((int*)sp->return_value));
printf("%d\n",temp25);

/*Redirector*/
goto exit;
redirector:
if(_ra==0) goto return0;
if(_ra==1) goto return1;
if(_ra==2) goto return2;
exit:
;
return 0;
}

