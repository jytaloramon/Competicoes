#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct PALAVRA{
    char text[40];
    int tempo;
}PALAVRA;

int busca(PALAVRA *palav, char *palavra, int qt){
    int i;
    for(i = 0; i < qt; i++){
        if(strcmp(palav[i].text, palavra) == 0) return palav[i].tempo;
    }
    return 0;
}

int main(int *args, char *argv){
   
    int T, N, M, i, j, s, soma;
    char text[2000], aux[50];
    struct PALAVRA palavra[60];

    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%d", &N);
        for(j = 0; j < N; j++){
            scanf("%s %d", &palavra[j].text, &palavra[j].tempo);
        }
        scanf("%d", &M);
        getchar();
        scanf("%[^\n]s", &text);

        soma = 0;
        j = 0;
        s = 0;
        
        while (text[j] != '\0'){
            if(text[j] != ' '){
                aux[s] = text[j];
                s++;
            } else{
                aux[s] = '\0';
                soma += busca(palavra, aux, N);
                s = 0;
            }
            j++;
        }
        aux[s] = '\0';
        soma += busca(palavra, aux, N);
        printf("Caso %d: %d\n", i+1, soma);
    }

    return (EXIT_SUCCESS);
}