#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const char *st1, const char *st2, const int *length);

int main(int argc, char const *argv[]){

    int i = 0, lengthGabarito,end = 1, resultado;
    char *gabarito, *respUsu;

    scanf("%d", &lengthGabarito);
    getchar();

    gabarito = malloc(sizeof(char) * (lengthGabarito * 2));
    respUsu = malloc(sizeof(char) * (lengthGabarito * 2));

    gabarito[0] = '\0';
    lengthGabarito = (lengthGabarito * 2 - 1);

    while(lengthGabarito != strlen(gabarito)){
        if(i != 0)
            printf("Gabarito de tamanho errado. Entre com o novo gabarito:\n");
        gets( gabarito);
        i++;
    }
   
    do{
        
        gets(respUsu);
        
        end = strcmp(respUsu, "sair");
        if(!end) continue;

        end = strlen(respUsu);
        
        if (end != lengthGabarito) 
            printf("Tamanho da resposta diferente do tamanho do gabarito.\n");
        else {
            resultado = compare(gabarito, respUsu, &lengthGabarito);
            printf("Percentual de acertos: %.1f\n", (resultado * 100.0 / (lengthGabarito / 2 + 1)));
        }
    } while (end);
}

int compare(const char *st1, const char *st2, const int *length){
    int i, acertos = 0;

    for(i = 0; i < *length; i += 2) 
        if(st1[i] == st2[i]) acertos++;
    
    return acertos;
}