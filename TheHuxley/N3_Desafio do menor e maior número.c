#include "stdio.h"
#include "stdlib.h"

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

void merge(int *vet, int ini, int fim){
    
    if(fim - 1 <= ini) 
        return;

    int meio = (fim + ini) / 2;

    merge(vet, ini, meio);
    merge(vet, meio, fim);
    sort(vet, ini, meio, fim);
}

int main(){

    int i = 0, array[105];

    do{
        scanf("%d", &array[i++]);
    } while(array[i - 1]);
    
    
    merge(array, 0, i - 1);

    printf("%d %d\n", array[0], array[i - 2]);

    return 0;
}
