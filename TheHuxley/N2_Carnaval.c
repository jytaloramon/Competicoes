#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
	
	float nota, soma = 0, menor = 100, maior = 0;
	int i;
	for (i = 0; i < 5; ++i){
		scanf("%f", &nota);
		if(nota < menor){
			menor = nota;
		}
		if(nota > maior){
			maior = nota;
		}
		soma += nota;
	}
    soma -= (maior+menor);
	printf("%.1f\n", soma);
	
	return 0;
}