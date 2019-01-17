#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){

    int qt = 0, i, acm = 0;
    float media = 0, nu[1001], aux, soma = 0;

    while(1){
        scanf("%f", &nu[qt]);
        if(nu[qt] == -1) break;
        media += nu[qt];
        qt++;
    }

    media /= qt;

    for(i = 0; i < qt; i++){
        aux = nu[i] - media;
        soma += (aux * aux);
        if(nu[i] > media) acm++;
    }   

    soma =  sqrt((soma / (qt - 1)));
    
    printf("%.2f\n", media);
    printf("%.2f\n", soma);
    printf("%d\n", acm);
    
    return 0;
}