#include "stdio.h"
#include "stdlib.h"

int main(){

    int cont = 1, i;
    char palavra[11];

    while(cont){
        i = 0;
        scanf("%s", &palavra);
        if(palavra[0] == 'F' && palavra[1] == 'I' && palavra[2] == 'M' && palavra[3] == '\0'){cont = 0; continue;}
        while(palavra[i] != '\0'){
            i++;
        }    
        printf("%d\n", i);
    }
    return 0;
}