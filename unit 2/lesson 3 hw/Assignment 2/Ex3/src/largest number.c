/*
 ============================================================================
 Name        : largest.c
 Author      : mostafaarafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c ;
	printf("Enter three numbers:\n");
	fflush(stdout);fflush(stdin);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("largest number is :%f",a);
		}
		else {
			printf("largest number is : %f",c);
		}


	}
	else{ // b>a
		if(b>c)
		{
			printf("largest number is : %f",b);
		}
		else {
			printf("largest number is : %f",c);
		}
	}




}
