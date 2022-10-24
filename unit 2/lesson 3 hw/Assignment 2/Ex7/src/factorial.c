/*
 ============================================================================
 Name        : factorial.c
 Author      : mostafaarafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,z ;
	again:
	z=1;  // must be here .if you do it above 'again' , when you enter an integer for the second time it will sum it with the first one
	printf("Enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x>0)
	{
		for(y=1;y<=x;y++)
		{
			z=z*y;
		}
		printf("factorial= %d\n",z);
	}
	else if (x<0)
	{
		printf("Error!factorial of a negative number doesn't exist .\n");

	}
	else {
		printf("factorial of zero = 1 \n");
	}
	goto again;







}
