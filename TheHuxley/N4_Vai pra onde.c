#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char aux[60], fimNome[60];
    int auxDistanc, fimDistanc = 0, i =0;
    float auxPreco;

    while(1){
       scanf("%s",&aux);
       if( (aux[0] == 'f' || aux[0] == 'F') && (aux[1] == 'i' || aux[1] == 'I') && (aux[2] == 'm' || aux[2] == 'M') && aux[3] == '\0'){
                break;
        }
       scanf("%d%f", &auxDistanc, &auxPreco);
       if(auxDistanc > fimDistanc && auxPreco * 2 <= 300){
            fimDistanc = auxDistanc;
            strcpy(fimNome,aux) ; 
       }
    }

    if(fimDistanc == 0){
        printf("SEM DESTINO\n");
        return 0;
    }
    while(fimNome[i] != '\0'){
        printf("%c", toupper(fimNome[i]));
        i++;
    }
    printf("\n");
    return 0; 
}