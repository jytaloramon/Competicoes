#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, q, valor;

    scanf("%d", &valor);

    for(i = 1; i <= valor; i++){
        for(q = 1; q <= i; q++){
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}