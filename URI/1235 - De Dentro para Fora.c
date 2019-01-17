#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void organiza(char* text){
    int t, i, v = 0;
    t = strlen(text);
    char aux;
    for(i = t/2 - 1; i >= t/4; i--){
        aux = text[i];
        text[i] = text[v];
        text[v] = aux;
        v++;
    }
    v = t - 1;
    for(i = t / 2; i < (t *3)/4; i++){
        aux = text[i];
        text[i] = text[v];
        text[v] = aux;
        v--;
    }
}

int main() {

    int i, leituras, ta;
    char texto[105];

    scanf("%d", &leituras);
    getchar();

    for(i = 0; i < leituras; i++){
        gets(texto);
        organiza(texto);
        printf("%s\n", texto);
    }

    return 0;   
}