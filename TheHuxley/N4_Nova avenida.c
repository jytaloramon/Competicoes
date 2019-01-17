#include "stdio.h"
#include "stdlib.h"

int main(int *argv, char *args){

    int i, j, n, m, soma, menor = 100000;
    
    scanf("%d %d", &n, &m);
    
    int vet[n][m];

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            scanf("%d", &vet[i][j]);
        }   
    }

    for (j = 0; j < m; j++){
        soma = 0;
        for (i = 0; i < n; i++){
            soma += vet[i][j];
        }
        if(soma < menor) {menor = soma;}
    }   
    
    printf("%d\n", menor);

    return (EXIT_SUCCESS);
}