#include <stdio.h>
#include <stdlib.h>

int result(int au1, int au2, int pos){
    if(au1 > au2){
        return pos;
    }
    return pos+1;
}

int main(int argc, char** argv) {

    int i, aux, aux2, tabela[8], t = 0, q = 0;

    for(i = 0; i < 16; i = i+2){
        scanf("%d%d", &aux, &aux2);
        tabela[t] = result(aux, aux2, i);
        t++;
    }
    for(i = 0; i < t; i += 2){
        scanf("%d%d", &aux, &aux2);
        tabela[q] = tabela[result(aux, aux2, i)];
        q++;
    }
    t = 0;
    for(i = 0; i < q; i += 2){
        scanf("%d%d", &aux, &aux2);
        tabela[t] = tabela[result(aux, aux2, i)];
        t++;
    }
    t = 0;
    scanf("%d%d", &aux, &aux2);  
    tabela[t] = tabela[result(aux, aux2, t)];
    printf("%c\n", 65+tabela[0]);
    return(EXIT_SUCCESS);
}