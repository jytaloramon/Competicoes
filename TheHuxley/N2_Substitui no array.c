#include "stdio.h"
#include "stdlib.h"

int main(){
	
	int nu, aux, i, soma = 0;
	scanf("%d", &nu);
	for(i = 0; i < nu; i++){
		scanf("%d", &aux);
		if(aux % 2 == 0){
			soma++;
		}
		else{
			soma--;
		}
	}
	printf("%d\n", soma);
}