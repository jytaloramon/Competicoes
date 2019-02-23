#include <stdio.h>
#include <stdlib.h>

void merge(int *vet, int ini, int fim);

void sort(int *vet, int ini, int meio, int fim);

int compare(const void *a, const void *b);

int main(int argc, char const *argv[]){

    int i, lengthA, lengthB, *vetA, *vetB, espectroA, espectroB, count = 0;

    scanf("%d %d %d %d", &lengthA, &lengthB, &espectroA, &espectroB);

    vetA = malloc(sizeof(int) * lengthA);
    vetB = malloc(sizeof(int) * lengthB);

    for(i = 0; i < lengthA; i++)
        scanf("%d", &vetA[i]);

    for(i = 0; i < lengthB; i++)
        scanf("%d", &vetB[i]);

    merge(vetA, 0, lengthA);
    merge(vetB, 0, lengthB);

    i = 0;
    while(vetA[espectroA - 1] >= vetB[i] && i < lengthB){
        i++;
    }
      
    if(lengthB - i >= espectroB)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

void merge(int *vet, int ini, int fim){
    
    if(fim - 1 <= ini) 
        return;

    int meio = (fim + ini) / 2;

    merge(vet, ini, meio);
    merge(vet, meio, fim);
    sort(vet, ini, meio, fim);
}

void sort(int *vet, int ini, int meio, int fim){
    int i = ini, j = meio, t = 0, *vetAux = malloc(sizeof(int) * (fim - ini));

    while(i < meio && j < fim){
        if(vet[i] <= vet[j])
            vetAux[t++] = vet[i++];
        else
            vetAux[t++] = vet[j++];
    }

    while (i < meio)
        vetAux[t++] = vet[i++];

    while(j < fim)
        vetAux[t++] = vet[j++];
    
    for(i = ini, t = 0; i < fim; i++)
        vet[i] = vetAux[t++]; 
}
