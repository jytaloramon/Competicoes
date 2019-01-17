#include "stdio.h"
#include "stdlib.h"

int main(int *args, char *argv){

    char texto[100];
    int i = 0;

    gets(texto);
    
    while(texto[i] != '\0'){
        if(texto[i] > 96 && texto[i] < 123){
            texto[i] = 122 - (texto[i] - 97); 
        }
        i++;
    }

    printf("%s\n", texto);
   
    return (EXIT_SUCCESS);
}