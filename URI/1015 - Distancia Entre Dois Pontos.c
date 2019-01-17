#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){

    float x1, x2, y1, y2, soma;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    soma = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );
    printf("%.4f\n", soma);
    
}