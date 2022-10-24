/*
 ============================================================================
 Name        : Print.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
int main()
{
	int x;
	printf("Enter an integer number:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);
	printf("You entered: %d",x);
	return 0;
}
