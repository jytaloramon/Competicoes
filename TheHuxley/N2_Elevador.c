#include <stdio.h>
#include <stdlib.h>

void main() {
    
    int N, i, capacidade = 0, capacidadeMax, aux;
    char saida = 'N'; 

    scanf("%d%d", &N, &capacidadeMax);

    for(i = 0; i<N; i++){
        scanf("%d", &aux);
        capacidade -= aux;
        scanf("%d", &aux);
        capacidade += aux;
        if(capacidade > capacidadeMax){
            saida = 'S';
        }
    }
    printf("%c\n", saida);

}