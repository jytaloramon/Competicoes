#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main(){

    int cont = 1, qtMacaco = 0, qtCobra = 0, qtTigre = 0, i;
    float pesoMeTrigre = 0, peso;
    char tipo[45], pais[45];

    while(cont){
        scanf("%s %f %s", &tipo, &peso, &pais);
        
        i = 0;
        while(tipo[i] != '\0'){
            tipo[i] = tolower(tipo[i]);
            i++;
        }
        i = 0;
        while(pais[i] != '\0'){
            pais[i] = tolower(pais[i]);
            i++;
        }

        if(strcmp(tipo, "macaco") == 0){
            qtMacaco++;

        } else if (strcmp(tipo, "tigre") == 0){
            qtTigre++;
            pesoMeTrigre += peso;

        } else if (strcmp(tipo, "cobra") == 0 && strcmp(pais, "venezuela") == 0){
            qtCobra++;
        }

        scanf("%s", &tipo);
        i = 0;
        while(tipo[i] != '\0'){
            tipo[i] = toupper(tipo[i]);
            i++;
        }
        if(strcmp(tipo, "PARAR") == 0){
            cont = 0;
        }
    }

    if(qtTigre != 0){
        pesoMeTrigre /= qtTigre;
    }
    printf("%d\n%.2f\n%d\n", qtMacaco, pesoMeTrigre, qtCobra);

    return 0;
}
