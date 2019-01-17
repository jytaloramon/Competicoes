#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) {

    float a,b,c;
    scanf("%f%f",&a,&b);
    c = pow(a,2) + pow(b,2);
    c=sqrt(c);
    printf("%.2f\n",c);
    
    return (EXIT_SUCCESS);
}

