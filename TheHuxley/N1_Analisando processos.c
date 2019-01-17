#include "stdio.h"
#include "stdlib.h"

int main() {

    int tempo, espediente = 8 * 60; 

    scanf("%d", &tempo); 

    printf("%d\n", espediente / tempo);
    return 0;
}