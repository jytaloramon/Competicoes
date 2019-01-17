#include <stdio.h>
#include <stdlib.h>

int main(){
   
    int i;
    double media = 0, nu;
    for(i = 0; i < 100; i++){
        printf("Digite um numero:\n");
        scanf("%lf", &nu);
        media += nu;
    }
    printf("Media dos numeros: %.15lf\n", media/100);
}