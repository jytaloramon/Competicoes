#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0, aux, t = 0;

    do{
        scanf("%d", &aux);
        soma += aux;
        t++;
    } while(aux >= 0);
    soma += (-1*aux);
    t--;
    
    printf("%.2f", (float)soma/t);

    return 0;
}