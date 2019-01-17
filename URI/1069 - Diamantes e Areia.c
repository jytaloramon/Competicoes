#include "stdio.h"
#include "stdlib.h"

int q = 0;
int qtDiamont;

void empilha(){
    q++;
}

void desepilha(){
    if(q > 0) {q--; qtDiamont++;}
}

int main(int argc, char** argv) {

    char texto[1001];
    int i, n, j;

    scanf("%d", &n);

    for( i = 0; i < n; i++){
        
        scanf("%s", &texto);

        qtDiamont = 0;        
        j = 0;
        q = 0;
        while(texto[j] != '\0'){
            if(texto[j] == '<') empilha();
            else if(texto[j] == '>') desepilha();
            j++;
        }
        printf("%d\n", qtDiamont);
    }

    return (EXIT_SUCCESS);
}