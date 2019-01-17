#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416

int main(int argc, char** argv) {
    float a,area,volume;
    scanf("%f",&a);
    area = 4*pi*(pow(a,2)) ;
    volume = (4*pi*(pow(a,3)))/3;
    printf("%.2f\n%.2f\n",area,volume);
    
    return (EXIT_SUCCESS);
}

