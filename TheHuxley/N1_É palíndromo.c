#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main() {

    char palavra[100];
    int tamanhoPalavra, i, j, palindromo = 1; 

    gets(palavra); 

    tamanhoPalavra = strlen(palavra); 
    
    for( i = 0; i < tamanhoPalavra; i++){
        palavra[i] = tolower(palavra[i]); 
    }

    j = tamanhoPalavra - 1; 
    i = 0;  

    while(i < tamanhoPalavra){ 
        if(palavra[j] == ' '){
            j--;
            continue;
        }
        if ( palavra[i] == ' '){
            i++;
            continue;
        }
        if(palavra[i] != palavra[j]){
            palindromo = 0;
            break;
        }
        i++;
        j--;
    }

    if(palindromo == 1){
        printf("SIM\n");
    } else{
        printf("NAO\n");
    }

    return 0;
}

