#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char value[12], *chr;

    scanf("%s", &value);
    chr = &value[6];

    switch (*chr){
        case 'b':
            printf("Bulbassauro\n");
            break;
        case 'c':
            printf("Charmander\n");
            break;
        case 's':
            printf("Squirtle\n");
            break;
        default:
            printf("Codigo Invalido\n");
    }
    
    return (EXIT_SUCCESS);
}