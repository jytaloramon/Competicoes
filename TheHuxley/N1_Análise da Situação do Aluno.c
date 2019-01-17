#include "stdio.h"
#include "stdlib.h"

int main() {
    
    int aulasTotais, aulasFaltadas; 
    float media, porcentagemPresenca;

    scanf("%f %d %d", &media, &aulasTotais, &aulasFaltadas); 
    porcentagemPresenca = aulasFaltadas * 100 / aulasTotais;
    if((porcentagemPresenca <= 25 && media >= 5) || (porcentagemPresenca <= 50 && media >= 7)){
        printf("APROVADO\n");

    }else {
        printf("REPROVADO\n");
    }
    return 0;
}