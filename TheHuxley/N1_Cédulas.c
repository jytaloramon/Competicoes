#include <stdio.h>
#include <stdlib.h>

int main() {

    int valor, i, qtNota, valorNotas[7] = {100, 50, 20, 10, 5, 2, 1}; 
    
    scanf("%d", &valor);

    printf("%d\n", valor);
    for(i = 0; i < 7; i++){
        qtNota = valor / valorNotas[i];
        printf("%d nota(s) de R$ %d,00\n", qtNota, valorNotas[i]);
        valor -= (valorNotas[i] * qtNota);
    }
    return 0;
}

