/*
 ============================================================================
 Name        : calculator.c
 Author      : MostafaArafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char O;//operator
	float x,y;
	again:
	printf("Enter operator either + or - or * or /:\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&O);
	printf("Enter two operands:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(O){
	case'+':{
		printf("%f+%f=%f\n",x,y,x+y);
	}
	break;
	case'-':{
		printf("%f-%f=%f\n",x,y,x-y);
	}
	break;
	case'*':{
		printf("%f*%f=%f\n",x,y,x*y);
	}
	break;
	case'/':{
		printf("%f/%f=%f\n",x,y,x/y);
	}
	break;
	default:{
		printf("you entered wrong operator! \n");
	}

	}
	goto again;
}
