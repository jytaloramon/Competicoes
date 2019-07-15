#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    char palavra[21];
    int i = 3;

    scanf("%s", palavra);

    while (palavra[i] != '\0')
        printf("%c", palavra[i++]);
    
    printf("\n");

    return 0;
}
