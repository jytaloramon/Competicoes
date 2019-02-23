#include "stdio.h"
#include "stdlib.h"

int convert(char *string, int *arrayValue){
    if (string[0] == 'n')
        return arrayValue[0];
    if (string[0] == 's')
        return arrayValue[2];
    if(string[0] == 'o')
        return arrayValue[3];
    return arrayValue[1];
}

int main(){

    int local[4] = {0, 90, 180, 270}, saidaG, destG, aux;
    char saida[6], dest[6];

    scanf("%s %s", saida, dest);

    saidaG = convert(saida, local);
    destG = convert(dest, local);

    if(saidaG > destG){
        aux = saidaG;
        saidaG = destG;
        destG = aux;
    }
    
    if(destG == 270 && saidaG == 0)
        destG = 90;

    printf("%d\n", (destG - saidaG));
}
