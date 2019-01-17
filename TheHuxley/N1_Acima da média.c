#include "stdio.h"
#include "stdlib.h"

int main() {

    float notas[3], somaTotalNota = 0;
    int i, qt = 0;

    for(i = 0; i < 3; i++){
        scanf("%f", &notas[i]);
        somaTotalNota = somaTotalNota + notas[i]; 
    }
    somaTotalNota /= 3;

    for(i = 0; i < 3; i++){
        if(notas[i] > somaTotalNota){ 
            qt++;
        }
    }
    printf("%d\n", qt);
    return 0;
}