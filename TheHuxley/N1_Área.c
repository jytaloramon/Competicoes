#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159;

int main(int argc, char** argv) {

    double a,b,c;
    double areaTriang, areaCir, areaTrapezio, areaQuadrado, areaRetang;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    areaTriang = (a*c)/2;
    areaCir = (c*c) * PI;
    areaTrapezio = (a+b)*c/2;
    areaQuadrado = b * b;
    areaRetang = a * b;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\n", areaTriang, areaCir, areaTrapezio);
    printf("QUADRADO: %.3lf\nRETANGULO: %.3lf\n", areaQuadrado,areaRetang);
    
    return (EXIT_SUCCESS);
}

