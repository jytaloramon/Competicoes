#include "stdio.h"
#include "stdlib.h"

int main(int *argv, char *args){

    int vet[200], aux, qt = 0, i, j, idM;
   
    while(scanf("%d", &aux) != EOF){
        vet[qt] = aux;
        qt++;
    }

    for(i = 0; i < qt; i++){
        idM = i;
        for(j = i; j < qt; j++){
            if(vet[j] < vet[idM]){
                idM =j;
            }
        }

        if(i != qt - 1){
            printf("Menor elemento neste passo: %d\n", vet[idM]);
            printf("Estado Atual: ");
        } else{
            printf("Resultado Final: ");
        }
        
        aux = vet[i];
        vet[i] = vet[idM];
        vet[idM] = aux;
        
        printf("%d", vet[0]);
        for(j = 1; j < qt; j++) printf(" | %d", vet[j]);
        printf("\n\n");

    }

    return (EXIT_SUCCESS);
}