#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    char frase[51]; 
    int i = 0;

    scanf("%[^\n]s", frase);

    while(frase[i] != '\0') i++;

    printf("%d\n", i);
}