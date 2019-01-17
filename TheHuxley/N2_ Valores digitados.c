#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, vetor[5];

    for(i = 0; i < 5; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 5; i++){
        printf("Numero %d: %d\n", i+1, vetor[i]);
    }

    return 0;
}