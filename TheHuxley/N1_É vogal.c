#include "stdio.h"
#include "stdlib.h"

int main() {

    char text[100];

    gets(text); 

    if(text[1] == '\0'){
        if(text[0] == 'a' || text[0] == 'e' || text[0] == 'i' || text[0] == 'o' || text[0] == 'u' || text[0] == 'A' || text[0] == 'E' || text[0] == 'I' || text[0] == 'O' || text[0] == 'U'){
            printf("Eh vogal\n");
        } else{
            printf("Nao eh vogal\n");
        }

    } else{
        printf("1 caractere, por favor!\n");
    }
    
    return 0;
}