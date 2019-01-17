#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void main(){

    int nu1, nu2, aux, i, very;
    scanf("%d%d", &nu1, &nu2);
    if(nu1 > nu2){
        aux = nu1;
        nu1 = nu2;
        nu2 = aux; 
    }
    if(nu1 < 2){
        nu1 = 2;
    }
    if(nu2 % 2 == 0){
        nu2--;
    }
    
    for(i = nu2; i > nu1; i = i-2){
        very = 0;
        for(aux = 3; aux <= sqrt(i); aux = aux+2){
            if(i % aux == 0){
                very = 1;
                break;
            }
        }
        if(very == 0){
            printf("%d\n",i);
        }
    }
    if(nu1 == 2){
        printf("2\n");
    }

}