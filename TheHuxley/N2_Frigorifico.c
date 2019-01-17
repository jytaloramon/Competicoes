#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, n, id, idG, idM;
    float maisGordo = 0, maisMagro = 10000, aux;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d%f", &id, &aux);
        if(aux > maisGordo){
            maisGordo = aux;
            idG = id;
        }
        if(aux < maisMagro){
            maisMagro = aux;
            idM = id;
        }
    }
    printf("Gordo: id: %d peso: %.2fKg\n", idG, maisGordo);
    printf("Magro: id: %d peso: %.2fKg\n", idM, maisMagro);

    return 0;
}