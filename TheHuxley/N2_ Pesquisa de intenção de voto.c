#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, q; 
    scanf("%d", &q);
    float maiorDif = 0, aux1[q], aux2, n;

    for(i = 0; i < q; i++){
        scanf("%f", &aux1[i]);
    }

    for(i = 0 ; i < q; i++){
        scanf("%f", &aux2);
        n = aux1[i] - aux2;
        if(n > maiorDif) maiorDif = n;  
    }

    printf("%.2f\n", maiorDif);

    return 0;
}