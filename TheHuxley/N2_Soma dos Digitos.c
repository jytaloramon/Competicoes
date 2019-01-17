#include "stdio.h"
#include "stdlib.h"

int main(){
	
	char nu[10]; 
	int soma = 0, i = 0;
	scanf("%s", &nu);
	while(nu[i] != 0){
		soma += (nu[i]-48);
		i++;
	}
	printf("%d\n", soma);
}