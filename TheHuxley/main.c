#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    int i, nPinos, tamAbert, *pinos, dif;

    scanf("%d %d", &nPinos, &tamAbert);

    pinos = malloc(sizeof(int) * nPinos);

    for (i = 0; i < nPinos; i++)
        scanf("%d", &pinos[i]);
    return 0;
}
