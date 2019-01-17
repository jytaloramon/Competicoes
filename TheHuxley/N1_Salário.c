#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b;float c,tol;
    scanf("%d%d%f",&a,&b,&c);
    tol=b*c;
    printf("NUMBER = %d\nSALARY = R$ %.2f\n",a,tol);
    
    return (EXIT_SUCCESS);
}

