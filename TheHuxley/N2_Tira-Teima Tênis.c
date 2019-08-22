#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    int xStart = 0, yStart = 0, 
        xEnd = 432, yEnd = 468,
        xB, yB;

    printf("Digite as coordenadas (X, Y) separadas por ENTER:\n");
    scanf("%d %d", &xB, &yB);

    if ((xB >= xStart && xB <= xEnd) && (yB >= yStart && yB <= yEnd))
        printf("BOLA DENTRO\n");
    else
        printf("BOLA FORA\n");

    return EXIT_SUCCESS;
}