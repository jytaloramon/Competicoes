#include "stdio.h"
#include "stdlib.h"

int main(){

    float salario, salarioFinal;

    scanf("%f", &salario);
    if (salario > 500){
        salarioFinal = salario + (salario * 0.1);

    } else if (salario > 300) {
        salarioFinal = salario + (salario * 0.07);

    } else {
        salarioFinal = salario + (salario * 0.05);
    }
    printf("%.2f\n", salarioFinal);
    return 0;
}