#include "stdio.h"
#include "stdlib.h"

int compare(const void *a, const void *b);

int main(){

    int i, count = 0, j;
    char posicao[3][41], busca[6] = {'b', 'e', 'o', 'r', 's', 'w'};


    scanf("%s %s %s", posicao[0], posicao[1], posicao[2]);

    for(i = 0; i < 3; i++){
        count = 0;
        j = 0;
        while(posicao[i][j] != '\0' && count < 5){
            if(bsearch(&posicao[i][j++], busca, 5, 1, &compare) != NULL) 
                count++;
        }
        
        if(count == 5)
            break;    
    }

    if(i == 0)
        printf("Esquerda\n");
    else if (i == 1)
        printf("Meio\n");
    else
        printf("Direita\n");
    return 0;
}


int compare(const void *a, const void *b){
    return (*(char *)a - *(char *)b);
}
