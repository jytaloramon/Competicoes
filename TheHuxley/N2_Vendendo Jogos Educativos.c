#include "stdio.h"
#include "stdlib.h"

int main(){

    int qtJ;
    float t, b, tV, p;

    scanf("%d", &qtJ);
    
    p = qtJ / 15 ;
    tV = qtJ * 19.9;
    b = tV * (0.08 * p);
    t = tV/2 + b;

    printf("%.2f\n%.2f\n%.2f\n", tV, b, t);
    
    return 0;
}