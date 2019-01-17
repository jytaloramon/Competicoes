#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float largura, altura, comprimento;
    scanf("%f%f%f", &largura, &comprimento, &altura);
    if(largura <= 45 && comprimento <= 56 && altura <=25 ){
        printf("PERMITIDA\n");
    }
    else{
        printf("PROIBIDA\n");
    }
    return(EXIT_SUCCESS);
}