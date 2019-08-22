#include "stdio.h"
#include "stdlib.h"

int criptoValue(int *value, int *desloc){
    int d = *desloc % 10, v = *value + d;

    if (v < 0)
        return 10 + v;
    if (v >= 10)
        return v - 10;
    
    return v;
}

int main(int argc, char const *argv[]){
   
    int i, length, desloc, *string;

    scanf("%d", &length);

    string = malloc(sizeof(int) * length);

    for (i = 0; i < length; i++)
        scanf("%d", &string[i]);

    scanf("%d", &desloc);

    for (i = 0; i < length; i++)
        printf("%d%c", criptoValue(&string[i], &desloc), i < length - 1 ? ' ' : '\n');

    return 0;
}