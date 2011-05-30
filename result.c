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
sp->locals[8]=(int *)malloc(sizeof(int));
sp->locals[9]=(int *)malloc(sizeof(int));
sp->locals[10]=(char *)malloc(sizeof(char)*200);

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
sp->locals[3]=(int *)malloc(sizeof(int));
sp->locals[6]=(int *)malloc(sizeof(int));
sp->locals[7]=(char *)malloc(sizeof(char)*200);
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

