#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, q, j;
    scanf("%d", &q);
    float matriz[q][q], soma; 

    for(i = 0; i < q; i++){
        for(j = 0; j < q; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("tr(A) = (%.2f)", matriz[0][0]);
    soma = matriz[0][0];
    for(j = 1; j < q; j++){
        printf(" + (%.2f)", matriz[j][j]);
        soma += matriz[j][j];
    }
    printf(" = %.2f\n", soma);

    return 0;
}