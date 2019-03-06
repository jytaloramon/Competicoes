#include "stdio.h"
#include "stdlib.h"

int main(int *args, char *argv){

    int idade;

    scanf("%d", &idade);

    if (idade < 16)
        printf("nao eleitor\n");
    else if ((idade >= 16 && idade < 18) || idade > 65)
        printf("eleitor facultativo\n");
    else
        printf("eleitor obrigatorio\n");

    return (EXIT_SUCCESS);
}