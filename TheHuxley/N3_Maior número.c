#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int i;
    float maior = -100000, qt;

    for(i = 0; i < 50; i++){
        printf("Digite um numero:\n");
        scanf("%f", &qt);
        if(qt > maior) maior = qt;
    }
    
    printf("Maior numero: %.2f\n", maior);
}