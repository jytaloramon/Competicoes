#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char const *argv[]){
    
    char string[101];
    int lenght;

    scanf("%s", &string);
    lenght = strlen(string);
    string[lenght - 3] = '\0';

    printf("Aquilo que %s.\n", string);

    return 0;
}