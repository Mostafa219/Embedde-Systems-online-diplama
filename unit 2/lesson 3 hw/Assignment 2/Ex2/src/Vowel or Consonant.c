
#include <stdio.h>
#include <stdlib.h>

int main() {
	char c;

		while(1){
			printf("Enter an alphabet: ");
			fflush(stdin); fflush(stdout);
			scanf("%c", &c);
			if((c =='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c =='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))
			{
				printf("%c is vowel\n",c);
			}
			else{
				printf("%c is consonant\n",c);
			}
		}

		return 0;
}
