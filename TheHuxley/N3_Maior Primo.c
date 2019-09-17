#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int ePrimo(int *v){
    if(*v == 2) return 1;
    if(*v < 2 || *v % 2 == 0) return 0;
    
    int i, fim = sqrt(*v);

    for (i = 3; i <= fim; i += 2)
        if(*v % i == 0)
            return 0;

    return 1;
}

int main(int argc, char const *argv[]){
    
    int value, maiorPrimo = -1;

    do{
        scanf("%d", &value);
        if(value != 404){
            if(ePrimo(&value) && value > maiorPrimo)
                maiorPrimo = value;
        }
    } while (value != 404);
    
    maiorPrimo != -1 ? printf("%d\n", maiorPrimo) : printf("SEM PRIMOS\n");
   
    return 0;
}