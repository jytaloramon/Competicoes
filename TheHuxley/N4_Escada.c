#include "stdio.h"
#include "stdlib.h"

int main(int *args, int *argv){
 
    int i, soma = 10, n, t, ulti, dif;

    scanf("%d", &n);

    scanf("%d", &t);
    ulti = t;

    for(i = 0; i < n - 1; i++){
        scanf("%d", &t);
        dif = t - ulti;

        if(dif <= 10){
            soma += dif;
        } else{
            soma += 10;
        }     
        ulti = t;
    }
    
    printf("%d\n", soma);
   
    return(EXIT_SUCCESS);
}