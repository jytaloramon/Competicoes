#include <stdio.h>
#include <stdlib.h>

void main(){

    float valor, valorSobra = 0;
    int quant, i, qtSobra = 0;
    
    for(i = 0; i < 6; i++){
        scanf("%f%d", &valor, &quant);
        if(quant > 1){
            qtSobra += quant-1;
            valorSobra += (quant-1)*valor;
        }
    }
    printf("%d\n", qtSobra);
    valorSobra >= 800? printf("SIM\n"):printf("NAO\n");
}