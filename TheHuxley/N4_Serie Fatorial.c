#include <stdio.h>
#include <stdlib.h>

double fatorial(double n) {
	if(n == 1)
		return n;
	return n * fatorial(n-1);
}

int main(){

    int nu, i, divisor = 1;
    double soma = 0, tete;
    scanf("%d", &nu);

    for(i = 1; i <= nu; i++){
        if(i % 2 == 0){
            tete = fatorial(i)/divisor;
            soma -= tete;
        }       
        else{
            tete = fatorial(i)/divisor;
            soma += tete;
        }
        divisor = (divisor*2)+1;
    }
    printf("%.2lf\n", soma);
    return 0;
}