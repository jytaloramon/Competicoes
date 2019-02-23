#include "stdio.h"
#include "stdlib.h"

int main(){

    int qtArmas, calibre;
    char nacionalidade[10], ocupacao;

    while(1){

        scanf("%s", &nacionalidade);
        getchar();
        if (nacionalidade[0] != 'E' && nacionalidade[0] != 'B' || nacionalidade[1] != '\0')
            break;

        scanf("%c %d %d", &ocupacao, &qtArmas, &calibre);
        
        if(nacionalidade[0] == 'E'){
            if(qtArmas < 1)
                printf("Liberado\n");
            else
                printf("Barrado\n"); 
        }
        else if (ocupacao == 'M')
            printf("Liberado\n");
        else if (ocupacao == 'T' || ocupacao == 'O'){
            if(qtArmas <= 1 && calibre <= 22)
                printf("Liberado\n");
            else
                printf("Barrado\n"); 
        }
        else if (ocupacao == 'C' && qtArmas <= 2 && calibre <= 38)
            printf("Liberado\n");
        else
            printf("Barrado\n");

        getchar();    
    }

    printf("Fim\n");

    return 0;
}
