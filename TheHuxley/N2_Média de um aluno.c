#include "stdio.h"
#include "stdlib.h"


int main(int *args, char *argv){

    float l, soma = 0;

    printf("Informe a primeira nota do aluno:\n");
    scanf("%f", &l);
    soma += l;

    printf("Informe a segunda nota do aluno:\n");
    scanf("%f", &l);
    soma += l;

    printf("Informe a terceira nota do aluno:\n");
    scanf("%f", &l);
    soma += l;

    printf("Informe a quarta nota do aluno:\n");
    scanf("%f", &l);
    soma += l;

    soma /= 4;
    printf("Media: %.3f\n", soma);
    
    return (EXIT_SUCCESS);
}