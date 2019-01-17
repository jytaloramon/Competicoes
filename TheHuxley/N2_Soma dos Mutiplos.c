#include "stdio.h"
#include "stdlib.h"

int main(){
	
	int soma = 0, i = 3, nu;
	scanf("%d", &nu);
	while(i < nu){
		if(i % 3 == 0 || i%5 ==0){
			soma += i;
		}
		i++;
	}
	printf("%d\n", soma);
}