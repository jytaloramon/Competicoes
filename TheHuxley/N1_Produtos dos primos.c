#include "stdio.h"
#include "stdlib.h"
#include "math.h"

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

int main(){

    int i, j, numero[4], ok = 1, primo;

    for(i = 0; i < 4; i++)
        scanf("%d", &numero[i]);
        
    ok = ePrimo(&numero[0]) && ePrimo(&numero[1]) && ePrimo(&numero[2]) && ePrimo(&numero[3]);
    if(ok == 1){
        primo = numero[0] * numero[1] * numero[2] * numero[3];
        printf("%d\n", primo);
    } else
        printf("SEM PRODUTO\n");
    
    
    return 0;
}