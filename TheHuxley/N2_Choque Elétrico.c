#include "stdio.h"
#include "stdlib.h"
#include <math.h>

int main(int argc, char const *argv[]){
	
	int i, soma;
	scanf("%d", &i);
	if(i <= 20){
		soma = 20 + (i*i*i);
	}	
	else if(i > 20 && i <= 40){
		soma = 	8000 + pow(i - 10, 2);
	}
	else if(i > 40 && i <= 60){
		soma = 	9000 + 5*i;
	}
	else if(i > 60 && i <= 80){
		soma = 	9300 + 2*i;
	}
	else{
		soma = 9500 + i;
	}
	printf("Potencia de : %d W\n", soma);
	return 0;
}