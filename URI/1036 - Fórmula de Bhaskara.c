#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main() {

    double a, b, c, total, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    total = b * b + (-4 * a * c);
    if(total < 0 || a == 0) printf("Impossivel calcular\n");
    else{
        total = sqrt(total);
        x1 = (-b + total) / (2 * a); 
        x2 = (-b - total) / (2 * a); 
        printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }
    
    return 0;   
}