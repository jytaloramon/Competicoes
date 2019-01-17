#include "stdio.h"
#include "stdlib.h"

int main(){

    int q1, q2, q3;
    float arvore, p1, p2, p3;     

    scanf("%f %d %f %d %f %d %f", &arvore, &q1, &p1, &q2, &p2, &q3, &p3);
    
    arvore += (p1 * q1) + (p2 * q2) + (p3 * q3);
    printf("%.2f\n%.2f\n", arvore, arvore / 21 );

    return 0;
}