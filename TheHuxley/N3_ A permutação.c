#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){

    char num[1000000], aux;
    int tam, i ,j, q, p;
    
    scanf("%d", &q);

    for(p = 0; p < q; p++){
        scanf("%s", &num);
        tam = strlen(num);

        for(i = 0; i < tam; i++){
            for(j = i; j < tam; j++){
                if(num[i] < num[j]){
                    aux = num[i];
                    num[i] = num[j];
                    num[j] = aux;       
                }
            }
        }
        printf("Caso %d: %s\n", p+1, num);
    }

    return 0;
}
