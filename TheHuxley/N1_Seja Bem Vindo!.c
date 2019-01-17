#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char nome[121];
    gets(nome);
    printf("Seja muito bem-vindo %s\n",nome);
    
    
    return (EXIT_SUCCESS);
}

