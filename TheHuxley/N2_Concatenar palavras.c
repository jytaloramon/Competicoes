#include "stdio.h"
#include "stdlib.h"

int main(){
	
    char palavra1[100], palavra2[100];

    gets(palavra1);
    gets(palavra2); 

    printf("%s%s\n", palavra1, palavra2);  

	return 0;
}