#include "stdio.h"
#include "stdlib.h"

int main() {

    char texto[200];
    int i = 0, alteracoes = 0, ok = 1;

    gets(texto);

    if(texto[0] != '\0'){
        while(texto[i] != '\0'){
            if( texto[i] == '0' || texto[i] == '1' || texto[i] == '2' || texto[i] == '3' || texto[i] == '4' || texto[i] == '5' || texto[i] == '6' || texto[i] == '7' || texto[i] == '8' || texto[i] == '9'){
                ok = 0;
                break;
            }

            if(texto[i] == 'a' || texto[i] == 'A'){
                texto[i] = '@';
                alteracoes++;

            } else if(texto[i] == 'e' || texto[i] == 'E'){
                texto[i] = '3';
                alteracoes++;

            } else if(texto[i] == 'i' || texto[i] == 'I'){
                texto[i] = '1';
                alteracoes++;

            } else if(texto[i] == 'o' || texto[i] == 'O'){
                texto[i] = '0';
                alteracoes++;

            } else if(texto[i] == 's' || texto[i] == 'S'){
                texto[i] = '5';
                alteracoes++;

            } else if(texto[i] == 't' || texto[i] == 'T'){
                texto[i] = '7';
                alteracoes++;
            } 
            i++;
        }

        if(ok){
            for(i = i - 1; i >= 0; i--){
                printf("%c", texto[i]);
            }
            printf("\n%d\n", alteracoes);

        } else{
            printf("numeros\n0\n");
        }

    }else{
        printf("Estamos com problemas na conexão com o servidor\n");
    }
 
    return 0;
}