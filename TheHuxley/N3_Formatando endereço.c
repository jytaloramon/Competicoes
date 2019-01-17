#include "stdio.h"
#include "stdlib.h"

int main(){

    char text[6][150];

    gets(text[0]);
    gets(text[1]);
    gets(text[2]);
    gets(text[3]);
    gets(text[4]);
    gets(text[5]);

    printf("%s, %s.\n", text[0],text[1]);
    printf("Bairro: %s. Cep: %s\n", text[2], text[5]);
    printf("%s/%s\n", text[3], text[4]);

    return 0;
}