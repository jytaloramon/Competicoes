#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int main(){

    char texto[200], vogais[] = {'a', 'e', 'i', 'o', 'u'};
    int i = 0, j, qt[] = {0, 0, 0, 0, 0};

    gets(texto);

    while(texto[i] != '\0'){
        for(j = 0; j < 5; j++){
            if(tolower(texto[i]) == vogais[j]){
                qt[j]++;
                break;
            }
        }
        i++;
    }

    for(j = 0; j < 5; j++){
        printf("%c %d\n", vogais[j], qt[j]);
    }

    return 0;
}