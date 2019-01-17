#include "stdio.h"
#include "stdlib.h"

int main(int *argv, char *args){

    int i;
    float le, soma = 0, maior = 0, id;

    for(i = 0; i < 5; i++){
        scanf("%f", &le);
        soma += le;
        if(le > maior) {maior = le; id = i;}
    }

    printf("%.2f\n", soma / 5);

    if(id == 0 || id == 3 ) printf("NOVELA\n");
    else if(id == 1 || id == 4) printf("FILME\n");
    else printf("FUTEBOL\n");

    return (EXIT_SUCCESS);
}