#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, qt = 0;
    float aux;
    for(i = 0; i < 5; i++){
        printf("Digite um valor:\n");
        scanf("%f", &aux);
        if(aux < 0)
            qt++;
    }
    printf("Foram digitados %d numeros negativos\n", qt);
    return 0;
}