#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, qt = 0;
    float aux, media = 0, menorTemp = 0;
    for(i = 0; i < 9; i++){
        scanf("%f", &aux);
        if(aux < 0){
            media += aux;
            qt++;
            if(aux < menorTemp){
                menorTemp = aux;
            }
        }
    }
    printf("%.2f\n%.2f\n", menorTemp, media/qt);
    return 0;
}