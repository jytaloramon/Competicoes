#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

void formata(char *p1, char *p2){
    int i = 0;
    while(p1[i] != '\0'){
        p1[i] = tolower(p1[i]);
        i++;
    }
    
    i = 0;
    while(p2[i] != '\0'){
        p2[i] = tolower(p2[i]);
        i++;
    }
}

int main(int *args, char *argv){
    
    int i, j, local = 0, dia = 0;
    char d[10], l[10];

    for(i = 0; i < 11; i++){
        scanf("%s %s", &d, &l);
        formata(d, l);
        
        if(strcmp(d, "sexta") == 0) dia--;
        else dia++;

        if(strcmp(l, "bar") == 0) local--;
        else local++;
    }

    if(dia < 0) printf("SEXTA\n");
    else printf("DOMINGO\n");
    
    if(local < 0) printf("BAR\n");
    else printf("PRAIA\n");

    return (EXIT_SUCCESS);
}