#include "stdio.h"
#include "stdlib.h"

int main(){
	
	int i, aux, maior = 0, indexd = 0, soma, index = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &aux);
		if(aux > maior){
			maior = aux;
			indexd = i;
			soma = i;
		}
		else if(aux == maior){
			soma += i;
		}
	}
	if(soma == 0){
		printf("%d\n",indexd);
	}
	else{
		printf("%d\n", soma);
	}
}