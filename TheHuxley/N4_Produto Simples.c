#include <stdio.h>
#include <stdlib.h>

int main() {
    
    double soma = 1, i;
    
    while(scanf("%lf", &i) != EOF){
        soma *= i;
    }
    
    printf("Prod = %.0lf\n", soma);
	
}