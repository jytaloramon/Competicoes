#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

    int i, length;
    char pala[40], complemento[4] = {'n', 'd', 'o', '\0'};

    scanf("%s", pala);

    length = strlen(pala) - 1;
    pala[length] = '\0';

    printf("%s ", pala);

    for(i = 0; i <= 4 ; i++)
        pala[length++] = complemento[i];
    
    printf("%s\n", pala);

}
