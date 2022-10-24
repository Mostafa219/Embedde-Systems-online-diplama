/*
 ============================================================================
 Name        : Multiply.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x=0,y=0,product;
	printf("Enter two numbers:");
	fflush(stdout);fflush(stdin);
	scanf("%f %f",&x,&y);
	product=x*y ;
	printf("product :%f",product);
}
