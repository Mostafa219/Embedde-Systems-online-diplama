/*
 ============================================================================
 Name        : nestedfor.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//   output
	//	 0 1 2 3 4 5 6 7 8 9
	//	 1 2 3 4 5 6 7 8 9
	//   2 3 4 5 6 7 8 9
	//	 3 4 5 6 7 8 9
	//	 4 5 6 7 8 9
	//	 5 6 7 8 9
	//	 6 7 8 9
	//	 7 8 9
	//   8 9
	//   9
	// when you need to draw a shape you need two for loops, one for columns and another for rows
	int i=0,j ;
	for (i=0; i<10 ;i++) // for  columns
	{

		for (j=0;j<10;j++) //for rows
		{
			if (i<=j)                    /* how can you find this relationship ?
			                                compare between the first value of i and all values of j ,how ?
			                                i                   j
			                                0   >= (false)      0
				                                <=  (true)      1
										                        2
										                        3
										                        .
										                        .
										                        9    */
				printf("%d ",j);

		}
		printf("\n");


	}

}
