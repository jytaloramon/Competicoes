#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float f,c;
    printf("Digite uma temperatura na escala Fahrenheit:");
    scanf("%f",&f);
    c = (5*(f-32)/9);
    printf("\nTemperatura em Celsius: %.1f\n", c);
    
    return (EXIT_SUCCESS);
}

