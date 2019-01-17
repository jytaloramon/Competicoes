#include "stdio.h"
#include "stdlib.h" 

int main() {

    char palavra[200], caracteres[200]; 
    int i = 0, j, ok;

    gets(palavra);
    gets(caracteres);

    while(palavra[i] != '\0' ){
        j = 0;
        ok = 1;
        while(palavra[j] != '\0'){
            if(palavra[i] == caracteres[j]){
                ok = 0;
                break;
            }
            j++;
        }
        if(ok){
            printf("%c", palavra[i]);
        }
        i++;
    }
    printf("\n");
    
    return 0;
}