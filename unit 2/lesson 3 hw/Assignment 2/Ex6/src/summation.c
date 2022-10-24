/*
 ============================================================================
 Name        : summation.c
 Author      : mostafaarafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x =0,sum=0;
	printf("Enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		sum+=i;

	}
	printf("sum = %d\n",sum);
}
