#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"

void toLowerCase(char* pala){
    int i = 0;
    while(pala[i] != '\0'){
        pala[i] = tolower(pala[i]);
        i++;
    }
}

int main() {

    char aux[20], aux2[20];
    float preco, t;

    scanf("%s %s", &aux, &aux2);
    toLowerCase(aux);
    toLowerCase(aux2);

    if(strcmp(aux, "terno") == 0){
        if(strcmp(aux2, "simples") == 0) preco = 120.4 * 0.93;
        else if(strcmp(aux2, "fraque") == 0) preco = 180.7 * 0.93;
        else { preco = 150.35 * 0.93; }

    } else {
        if(strcmp(aux2, "gravata") == 0) preco = 30;
        else if(strcmp(aux2, "cinto") == 0) preco = 15;
        else { preco = 80; }
    }
    
    printf("%.2f\n", preco);
    return 0;   
}