#include "stdio.h"
#include "stdlib.h"


int main(int *args, char *argv){

    float soma, l;
    int mat;
    char str[5];

    while(1){
        printf("Informe o codigo do aluno: (0 para encerrar o programa)\n");
        scanf("%d", &mat);
        if(mat == 0) break;
        
        soma = 0;
        printf("Informe a primeira nota do aluno:\n");
        scanf("%f", &l);
        soma += l;
        printf("Informe a segunda nota do aluno:\n");
        scanf("%f", &l);
        soma += l;
        printf("Informe a terceira nota do aluno:\n"); 
        scanf("%f", &l);
        soma += l;  
        soma /= 3;

        sprintf(str, "%.2f", soma);
        if(str[3] == '0') str[3] = '\0';

        printf("Media do aluno: %s\n", str);     
    }

    return (EXIT_SUCCESS);
}