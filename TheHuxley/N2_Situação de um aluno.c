#include "stdio.h"
#include "stdlib.h"

int main(int *args, char *argv){

    int i, leitura;
    float media = 0;

    for(i = 0; i < 3; i++){
        scanf("%d", &leitura);
        media += leitura;
    }
    media /= 3;

    if(media >= 70) printf("A media do aluno foi %.2f e ele foi APROVADO\n", media);
    else if(media >= 40 && media < 70) printf("A media do aluno foi %.2f e ele foi FINAL\n", media);
    else if(media >= 0 && media < 40) printf("A media do aluno foi %.2f e ele foi REPROVADO\n", media);
    else printf("Media invalida\n");
    
    return (EXIT_SUCCESS);
}