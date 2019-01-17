#include "stdio.h"
#include "stdlib.h"

int criptoDeslock(char* text){
    int i = 0;
    while(text[i] != '\0'){
        if((text[i] > 64 && text[i] < 91) || (text[i] > 96 && text[i] < 123)){
            text[i] = (char) ((int) text[i]+3);
        }
        i++;
    }
    return i;
}

void criptoInverte(char* text, int tamanho){
    int i, j = tamanho - 1;
    char aux;
    for(i = 0; i < tamanho/2; i++){
        aux = text[i];
        text[i] = text[j];
        text[j] = aux;
        j--;
    }
}

void criptoDeslockMeta(char* text, int tamanho){
    int i = tamanho / 2;
    for(i; i < tamanho; i++){
        text[i] = (char) ((int) text[i] - 1);
    }
}

int main() {

    int i, leituras, ta;
    char texto[10000];

    scanf("%d", &leituras);
    getchar();

    for(i = 0; i < leituras; i++){
        gets(texto);
        ta = criptoDeslock(texto);
        criptoInverte(texto, ta);
        criptoDeslockMeta(texto, ta);
        printf("%s\n", texto);
    }

    return 0;   
}