#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

void convertMin(char *pala){
    int i = 0;
    while(pala[i] != '\0'){
        pala[i] = tolower(pala[i]);
        i++;
    }
}

int main(int *args, char *argv){

    int qtBar = 0, qtCab = 0, total = 0;
    char sexo, let[60];

    while(1){
        scanf("%c", &sexo);
        getchar();
        sexo = tolower(sexo);

        if(sexo == 'm'){
            scanf("%s", &let);
            convertMin(let);
            if(strcmp(let, "barba") == 0){ qtBar++; total += 15;} 
            else{ qtCab++; total += 25; }

        } else if(sexo == 'f'){
            scanf("%s", &let);
            convertMin(let);
            if(strcmp(let, "corte") == 0) total += 40;
            else if(strcmp(let, "penteado") == 0) total += 50;
            else total += 70;

        } else{ break;}
        getchar();
    }

    if(qtBar > qtCab) printf("BARBA\n");
    else if(qtBar < qtCab) printf("CORTE\n");
    else printf("AMBOS\n");

    printf("%d.00\n", total);
    
    return (EXIT_SUCCESS);
}