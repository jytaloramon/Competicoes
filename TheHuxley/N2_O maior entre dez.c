#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int main(int *args, char *argv){

    int i, maior = -100000000, leitura;

    for(i = 0; i < 10; i++){
        scanf("%d", &leitura);
        if(leitura > maior) maior = leitura;
    }

    printf("%d\n", maior);
    
    return (EXIT_SUCCESS);
}