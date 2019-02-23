#include "stdio.h"
#include "stdlib.h"

int main(){

    float valorC = 0, valorD = 0, valor, i;
    char nome[6];

    for (i = 0; i < 6; i++){
        scanf("%f %s", &valor, nome);
        if(nome[0] == 'D')
            valorD += valor;
        else
            valorC += valor;
    }
    
    valor = (valorD - valorC) / 2;
    
    if (valor == 0)
        printf("MORADORAS QUITES\n");
    else if (valor < 0)
        printf("DIANA\n%.2f\n", -valor);
    else
        printf("CLARA\n%.2f\n", valor);
}

