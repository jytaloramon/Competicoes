#include "stdio.h"
#include "stdlib.h"

typedef struct CASA{
    int qtPessoa, consumo, media, soma;
}CASA;

int main(int *argc, char *argv){
   
    int maiorQtCasa = 2, i, qt, j, totalP, totalC, t = 1, indexM, mar = 30000, guar, pri;
    struct CASA casaVet[20000];

    for(;;){
        scanf("%d", &qt);
        if(qt == 0) break;
        
        pri = 1;
        totalP = 0;
        totalC = 0;
        for(i = 0; i < qt; i++){
            scanf("%d %d", &casaVet[i].qtPessoa, &casaVet[i].consumo);
            casaVet[i].soma = casaVet[i].qtPessoa;
            casaVet[i].media = casaVet[i].consumo / casaVet[i].qtPessoa;
            totalC += casaVet[i].consumo;
            totalP += casaVet[i].qtPessoa;
        }
        
        printf("Cidade# %d:\n", t);
        for(i = 0; i < qt; i++){
            indexM = 0;
            for(j = 1; j < qt; j++){
                if(casaVet[j].media < casaVet[indexM].media) indexM = j;
                else if (casaVet[j].media == casaVet[indexM].media){
                    casaVet[indexM].soma += casaVet[j].qtPessoa;
                    casaVet[j].media = mar++; 
                }
            } 
            if(pri == 1){
                printf("%d-%d", casaVet[indexM].soma, casaVet[indexM].media);
                pri = 0;
            } else{
                if(casaVet[indexM].media < 30000){
                    printf(" %d-%d", casaVet[indexM].soma, casaVet[indexM].media);
                }
            }
            casaVet[indexM].media = mar++;
        }
        printf("\nConsumo medio: %.2f m3.\n\n", (float) totalC / totalP);

        t++;
    }

    return (EXIT_SUCCESS);
}