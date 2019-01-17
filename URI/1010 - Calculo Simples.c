#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, codigo, qt;
    float preco, total = 0;

    for (i = 0; i < 2; i++){
        scanf("%d%d%f", &codigo, &qt, &preco);
        total += qt * preco;
    }
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}