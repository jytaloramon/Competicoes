#include "stdio.h"
#include "stdlib.h"

int main(){

    char palavra[81], palaFim[81];
    int i = 0, t = 0, permit = 1;

    gets(palavra);

    while(palavra[i] != '\0'){
        if(palavra[i] == ' '){ 
            if(permit == 1){palaFim[t++] = palavra[i]; permit = 0;}
            i++;
            continue;
        }
        palaFim[t++] = palavra[i];
        permit = 1;
        i++;
    }
    palaFim[t] = '\0';

    printf("%s\n", palaFim);
    
    return 0;
}