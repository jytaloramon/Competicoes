#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){

    int i, total = 0;
    char input, gabarito[] = {'A', 'B', 'C', 'D', 'E', 'E', 'D', 'C', 'B', 'A'};

    for(i = 0; i < 10; i++){
        printf("Insira a resposta do aluno para a pergunta %d:\n", (i + 1));
        scanf("%c", &input);
        getchar();

        if(input == gabarito[i])
            total++;
    }

    printf("Nota do aluno: %d\n", total);
}