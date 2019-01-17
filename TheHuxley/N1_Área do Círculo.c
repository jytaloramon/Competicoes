#include "stdio.h"
#include "stdlib.h"

int main() {

    double raio, area;
    
    scanf("%lf", &raio);
    area = (3.14159 * raio * raio)/10000;
    printf("Area = %.4lf\n", area);

    return 0;
}