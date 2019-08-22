#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int findZeroLeft(char *str, int end){
    int i;

    for (i = 0; i < end; i++)
        if (str[i] != '0')
            return i;
    
    return -1;
}

int main (int argv, char *args){

    char string[51];
    int length, i, zeroLeft = 1, status = 1;

    while (status){
        scanf("%s", string);

        status = !(string[0] == '0' && string[1] == '\0');

        if (status){
            length = strlen(string);

            for (i = length - 1; i >= findZeroLeft(string, length); i--)
                printf("[%c]", string[i]);
            printf("\n");
        }

    }
}