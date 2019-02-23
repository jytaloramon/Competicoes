#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

void uppecase(char *string){
    int i = 0;
    
    while(string[i] != '\0')
        string[i] = toupper(string[i++]);
}

int main(){

    char input[15], nomeMPreco[15];
    float valor, soma = 0, precoMPreco = 0;

    while(1){
        scanf("%s", input);
        uppecase(input);

        if(!strcmp(input, "FIM"))
            break;
        
        scanf("%f", &valor);
        soma += valor;

        if(valor > precoMPreco){
            precoMPreco = valor;
            strcpy(nomeMPreco, input);
        }
    }

    printf("%.2f\n%s\n", soma, nomeMPreco);
}
