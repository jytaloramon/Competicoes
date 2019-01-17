#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void criptografia(char* text){
    int i = 0, posi;
    while(text[i] != '\0'){

        if( (text[i] > 64 && text[i] < 91)){
            posi = text[i] + 13;
            if(posi > 90){ posi = (posi - 91) + 65;}
            text[i] = (char) posi;

        } else if((text[i] > 96 && text[i] < 123)){
            posi = text[i] + 13;
            if(posi > 122){ posi = (posi - 123) + 97;}
            text[i] = (char) posi;
            
        }  
        i++;
    }
}

int main() {

    char texto[105];
    int i = 0;

    while(gets(texto) != NULL){
        criptografia(texto);
        printf("%s\n", texto);
    }

    return 0;   
}