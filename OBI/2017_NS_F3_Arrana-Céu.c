#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    int i, j, nAndares, andar, aux, nEventos, *andares, evento; 

    scanf("%d %d", &nAndares, &nEventos);

    andares = malloc(sizeof(int) * nAndares);

    for (i = 0; i < nAndares; i++)
        scanf("%d", &andares[i]);
    

    for (i = 0; i < nEventos; i++){
        scanf("%d", &evento);

        if(evento == 0){
            scanf("%d %d", &andar, &aux);
            andares[andar - 1] = aux;
        } else {
            scanf("%d", &andar);

            aux = 0;
            for (j = 0; j < andar; j++)
                aux += andares[j];
            
            printf("%d\n", aux);
        }
    }

    return 0;
}
