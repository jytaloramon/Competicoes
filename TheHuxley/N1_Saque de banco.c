#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int valor, x = 0, y = 0, z = 0, w = 0;
    scanf("%d",&valor);
    
    x = valor/50;
    valor -= (x*50);
    y = valor/20;
    valor -= (y*20);
    z = valor/10;
    valor -= (z*10);
    w = valor/5;
    valor -= (w*5);
    printf("Notas de 50: %d\nNotas de 20: %d\n", x, y);
    printf("Notas de 10: %d\nNotas de 5: %d\n", z, w);
    printf("Notas de 1: %d\n", valor);
}