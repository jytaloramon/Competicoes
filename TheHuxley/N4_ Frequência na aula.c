#include "stdio.h"
#include "stdlib.h"

int main(int *args, int *argv){

    int i, q, t = 0, j, p;

    scanf("%d", &q);

    int vet[q];

    for(i = 0; i < q; i++){
        scanf("%d", &p);
        for(j = 0; j < t; j++){
            if(p == vet[j]) {j = -2525;break;}
        }
        
        if(j != -2525){
            vet[t] = p;
            t++;
        }
    }

    printf("%d\n", t);

    return(EXIT_SUCCESS);
}