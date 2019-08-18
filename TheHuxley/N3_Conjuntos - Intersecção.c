#include "stdio.h"
#include "stdlib.h"

int compareOder(void const *v1, void const * v2){
    return *((int *) v1) - *((int *) v2);
}

int compareBinS(void const *v1, void const * v2){
    return *((int *) v1) - *((int *) v2);
}

int main(){

    int i, vetA[5], vetB[5], vetAux[5], *v, t = 0;

    for (i = 0; i < 5; i++)
        scanf("%d", &vetA[i]);

    for (i = 0; i < 5; i++)
        scanf("%d", &vetB[i]); 
    
    qsort(vetB, 5, sizeof(int), &compareOder);
	
    for (i = 0; i < 5; i++){
        v = bsearch(&vetA[i], vetB, 5, sizeof(int), &compareBinS);

        if (v != NULL)
            vetAux[t++] = *v;
    }

    for (i = 0; i < t; i++)
        printf("%d%c", vetAux[i], i < t - 1 ? ' ' : '\n');
    
	return 0;
}