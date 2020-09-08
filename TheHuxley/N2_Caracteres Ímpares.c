#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){

    char word[10];

    scanf("%s", word);

    printf("%c%c%c%c\n", word[0], word[2], word[4], word[6]);

    return 0;
}
