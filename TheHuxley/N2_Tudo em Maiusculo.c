#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char nome[101];
    int a;
    scanf(" %[^\n]",&nome);
    for(a=0;a<strlen(nome);a++)
    {
        printf("%c",toupper(nome[a]));
    }
    printf("\n");
    
    return (EXIT_SUCCESS);
}

