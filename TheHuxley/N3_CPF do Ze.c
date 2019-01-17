#include <stdio.h>
#include <stdlib.h>

void calculaDigitos(int *priDigi){
    int i, j = 10, soma = 0, resto;
    for(i = 0; i < 9; i++){
        soma += (priDigi[i]*j);
        j--;
    }
    resto = soma%11;
    if(resto < 2){
        priDigi[9] = 0;
    }
    else{
        priDigi[9] = 11-resto;
    }
    soma = 0;
    j = 11;
    for(i = 0; i < 10; i++){
        soma += (priDigi[i]*j);
        j--;
    }
    resto = soma%11;
    if(resto < 2){
        priDigi[10] = 0;
    }
    else{
        priDigi[10] = 11-resto;
    }
}

int main() {
   
    int n, i, j, cpf[12];

    scanf("%d", &n);
    for(i = 0; i < n; i++){

        for(j = 0; j < 9; j++){
            scanf("%d", &cpf[j]);
        }
        calculaDigitos(cpf);
        printf("Caso %d: ", i+1);
        for(j = 0; j < 9; j++){
            printf("%d", cpf[j]);
        }
        printf("-%d%d\n", cpf[9], cpf[10]);
    }
}