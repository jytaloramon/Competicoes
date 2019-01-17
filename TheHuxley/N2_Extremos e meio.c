#include <stdio.h>
#include <stdlib.h>

void divi(int *vetor, int ini, int fim);

void merge(int *vetor, int ini, int meio, int fim);

int main(int *argc, char *argv){

    int i, j, q;
    int *vet;

    scanf("%d", &q);

    vet = malloc(sizeof(int) * q);

    for(i = 0; i < q; i++){
        scanf("%d", &vet[i]);
    }

    divi(vet, 0, q);

    printf("%d %d %d\n", vet[0], vet[q / 2], vet[q - 1]);
}

void divi(int *vetor, int ini, int fim){
    
    if(ini >= fim - 1) return;

    int meio = (ini + fim) / 2;

    divi(vetor, ini, meio);
    divi(vetor, meio, fim);

    merge(vetor, ini, meio, fim);
}

void merge(int *vetor, int ini, int meio, int fim){

    int i = ini, j = meio, q = 0, vet[fim - ini];

    while(i < meio && j < fim){
        if(vetor[i] <= vetor[j]) vet[q++] = vetor[i++];
        else vet[q++] = vetor[j++];
    }

    while(i < meio){
        vet[q++] = vetor[i++];
    }

    while(j < fim){
        vet[q++] = vetor[j++];
    }

    q = 0;
    for(i = ini; i < fim; i++){
        vetor[i] = vet[q++];
    }
} 