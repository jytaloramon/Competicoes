#include "stdio.h"
#include "stdlib.h"

int main(){

    int maiorL = -1000000, somaDia = 0, i, aux, delta = 0, soma = 1;
    float somaT = 0;       

    for(i = 1; i < 10; i++){
        scanf("%d", &aux);
        if(maiorL < aux){
            maiorL = aux;
        }
        if(i == soma){
            somaDia += aux;
            soma += 4;
        }
        somaT += aux;
    }
    somaT /= 9;

    if(maiorL < 0)
        delta = -1;
    else if( maiorL > 0)
        delta = 1;

    printf("%.2f %d %d %d\n", somaT, maiorL, delta, somaDia);   
    
    return 0;     
}