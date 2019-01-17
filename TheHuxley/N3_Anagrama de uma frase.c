#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int main(){

    char frase1[300], frase2[300];
    int i = 0, j, saida = 1;

    gets(frase1);
    gets(frase2);

    while(frase1[i] != '\0'){
        if(frase1[i] == ' ' || frase1[i] == '.' || frase1[i] == ',' || frase1[i] == '?' || frase1[i] == '!') {i++; continue;}
        j = 0;
        while(frase2[j] != '\0'){
            if(toupper(frase1[i]) == toupper(frase2[j])){
                frase1[i] = '_';
                frase2[j] = '_';
                break;
            }
            j++;
        }
        if(frase1[i] != '_') {saida = 0; break;}
        i++;
    }

    j = 0;
    while(frase2[j] != '\0'){
        if(frase2[j] == ' ' || frase2[j] == '.' || frase2[j] == ',' || frase2[j] == '?' || frase2[j] == '!') {j++; continue;}
        if(frase2[j] != '_'){saida = 0; break;} 
        j++;
    }

    if(saida == 0){
        printf("False\n");
    } else {
        printf("True\n");
    } 

    return 0;
}
