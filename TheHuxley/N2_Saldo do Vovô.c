#include "stdio.h"
#include "stdlib.h"

int main(int *args, char *argv){

    int i, menor = 100000, leitura, total, q;

    scanf("%d %d", &leitura, &total);

    for(i = 0; i < leitura; i++){
        scanf("%d", &q);
        total += q;
        if(total < menor) menor = total;
    }

    printf("%d\n", menor);
    
    return (EXIT_SUCCESS);
}