#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int main(int *args, char *argv){ 
    
    char pt[100];
    int i, j, q;

    while(gets(pt) != NULL){
        q = 0;
        while(pt[q] != '\0' && q < 21){
            q++;
        }

        if(q > 20 || q < 1) printf("Entrada invalida\n");
        else{
            for(i = 0; i < q; i++){
                for(j = 0; j < i+1; j++){
                    printf("%c", toupper(pt[i]));
                }
                printf("\n");
            }
        }
    }
    
    return (EXIT_SUCCESS);
}