/*
 ============================================================================
 Name        : Evenorodd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 0;
	again :
	printf("Enter an integer you want to check :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	if ((a%2)==0)
	{
		printf("%d is even\n",a);

	}
	else
		printf("%d is odd\n",a);
	goto again;
}
