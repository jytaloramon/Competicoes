#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){

    int i = 0, find = -1;
    char caracter, text[15];

    scanf("%s %c", text, &caracter);

    while(text[i] != '\0'){
        if(text[i] == caracter){
            find = i;
            break;
        }
        i++;
    }
    
    printf("%d\n", find);
}