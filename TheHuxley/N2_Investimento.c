#include <stdio.h>
#include <stdlib.h>

int main(){
   
    float cIni, taxa, i, aux; 
    int tempo;
    scanf("%f%f%d", &cIni, &taxa, &tempo);
    tempo *= 12/(3);
    for(i = 0; i < tempo; i++){
        aux = cIni * taxa;
        cIni += aux;
        printf("Rendimento: %.2f Montante: %.2f\n", aux, cIni);
    }
    return 0;
}