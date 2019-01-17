#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a[1],b[1],c[1],total;
    scanf("%d%d%d%d%d%d",&a[0],&b[0],&c[0],&a[1],&b[1],&c[1]);
    total=(a[0]*a[1])+(b[0]*b[1])+(c[0]*c[1]);
    
    printf("Valor: R$%d.00\n",total);
    
    return (EXIT_SUCCESS);
}

