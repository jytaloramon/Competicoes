#include <stdio.h>
#include <stdlib.h>

void sort(char *string, int ini, int meio, int fim){
    
    int i = ini, j = meio, t = 0;
    char *aux = malloc(sizeof(char) * (fim - ini));

    while(i < meio && j < fim){
        if(string[i] <= string[j]) aux[t++] = string[i++];
        else aux[t++] = string[j++];
    }

    while(i < meio) aux[t++] = string[i++];
    
    while(j < fim) aux[t++] = string[j++];  

    t = 0;
    for(i = ini; i < fim; i++){
        string[i] = aux[t++];
    }
}

void merge(char *vet, int ini, int fim){

    if(fim - 1 <= ini) return;

    int meio = (ini + fim) / 2;

    merge(vet, ini, meio);
    merge(vet, meio, fim);
    sort(vet, ini, meio, fim);
}

int main(int argc, char const *argv[]){

    int i, j;
    char seq[6];
    
    for(i = 0; i < 5; i++){
        scanf(" %c", &seq[i]);
    }

    merge(seq, 0, 5);

    j = 0;
    for (i = 1; i < 5; i++){
        if(seq[i] != seq[i - 1] + 1){
            printf("nao\n");
            return 0;
        }
    }
    
    printf("sim\n");
    return 0;
}