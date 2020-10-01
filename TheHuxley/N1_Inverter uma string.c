#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char const *argv[]){

    char word[260];

    scanf("%s", word);

    for(int i = strlen(word) - 1; i >= 0; i--) printf("%c", word[i]);
    printf("\n");

    return 0;
}
