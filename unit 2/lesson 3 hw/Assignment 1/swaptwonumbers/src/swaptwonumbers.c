#include <stdio.h>
#include <stdlib.h>

int main() {
	int a , b , temp ;
	printf("enter value of a : ");
	fflush(stdout);fflush(stdin);

	scanf("%d"  , &a);
	temp = a;
	printf("enter value of b : ");
	fflush(stdout);fflush(stdin);
	scanf("%d" , &b);
	a=b;
	b=temp;
	printf("after swapping , value of a %d\r\n" , a);
	printf("after swapping , value of b %d\r\n" , b);
	return 0;
}
