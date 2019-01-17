#include "stdio.h"
#include "stdlib.h"

int main(int *args, char *argv){

    int i, j, qt, t, soma;

    scanf("%d ", &qt);
    char pala[qt][100], base[100];

    for(i = 0; i < qt; i++){
        gets(pala[i]);
    }
    scanf("%s", &base);

    t = 0;
    while(base[t] != '\0'){
        soma = 0;
        for(i = 0; i < qt; i++){
            j = 0;
            while(pala[i][j] != '\0'){    
                if(pala[i][j] == base[t]) soma++;       
                j++;
            }
        }
        printf("%c = %d\n", base[t], soma);
        t++;
    }

    return (EXIT_SUCCESS);
}