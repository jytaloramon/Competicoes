#include <stdio.h>
#include <stdlib.h>

void dividir(int *vet, int ini, int fim);
void ordena(int *vet, int ini, int meio, int fim);

int main(int *argc, char *argv){

    int i = 0, vetor[500010], q;

    while(scanf("%d", &vetor[i]) != EOF){
        i++;
    }

    dividir(vetor, 0, i);

    for(q = 0; q < i; q++){
        printf("%d\n", vetor[q]);
    }
}

void dividir(int *vet, int ini, int fim){
    if (ini >= fim - 1) return;
    
    int meio = (ini + fim) / 2;

    dividir(vet, ini, meio);
    dividir(vet, meio, fim);
    ordena(vet, ini, meio, fim);
}

void ordena(int *vet, int ini, int meio, int fim){
	
    int i = ini, j = meio, q = 0, *vetaux = malloc(sizeof(int) * (fim - ini));

    while (i < meio && j < fim){
    
        if (vet[i] < vet[j]) vetaux[q++] = vet[i++];
        else vetaux[q++] = vet[j++];
        
    }

    while (i < meio) vetaux[q++] = vet[i++];
    
    while (j < fim) vetaux[q++] = vet[j++];

	q = 0;
    for (i = ini; i < fim; i++){
       vet[i] = vetaux[q++];
    }
}