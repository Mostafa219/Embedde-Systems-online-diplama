/*
 ============================================================================
 Name        : char.c
 Author      : mostafaarafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	again:
	printf("Enter an character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &x);
	if(((x>=65)&&(x<=90))||((x>=97)&&(x<=122)))// according to ascii code ,small letters from 65 to 90 and capital letters from 97 to 122
	{

		printf("%c is an alphabet\n",x);
	}

	else{
		printf("%c is not an alphabet\n",x);
	}
    goto again;
}
