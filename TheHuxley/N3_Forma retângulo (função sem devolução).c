#include <stdio.h>
#include <stdlib.h>

void sort(int *vet, int ini, int meio, int fim){
    
    int i = ini, j = meio, t = 0, *temp = malloc(sizeof(int) * (fim - ini));

    while(i < meio && j < fim){
        if(vet[i] <= vet[j]) temp[t++] = vet[i++];
        else temp[t++] = vet[j++];
    }

    while(i < meio)temp[t++] = vet[i++];
    while (j < fim) temp[t++] = vet[j++]; 
       
    for(i = ini, t = 0; i < fim; i++)
        vet[i] = temp[t++];
}

void merge(int *vet, int ini, int fim){

    if(fim - 1 <= ini) return;

    int meio = (fim + ini) / 2;
    merge(vet, ini, meio);
    merge(vet, meio, fim);
    sort(vet, ini, meio, fim);
}


int main(int argc, char const *argv[]){

    int vetor[4];

    scanf("%d %d %d %d", &vetor[0], &vetor[1], &vetor[2], &vetor[3]);
    
    merge(vetor, 0, 4);

    if (vetor[0] == vetor[1] && vetor[2] == vetor[3])
        printf("formam um retangulo\n");
    else
        printf("nao formam um retangulo\n");
}