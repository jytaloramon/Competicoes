#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"

int main(int argc, char const *argv[]){

    int i = 0, length, soma = 0;
    char number[30];

    scanf("%s", number);

    length = strlen(number);

    for(length = length - 1; length >= 0; length--){
        if(number[length] != '0'){
            soma += pow(2, i);
        }
        i++;
    }

    printf("%d\n", soma);

    return 0;
}
