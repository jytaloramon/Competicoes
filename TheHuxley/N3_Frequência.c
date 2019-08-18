#include "stdio.h"
#include "stdlib.h"

int compare(void const *v1, void const *v2){
    return *((int *) v1) - *((int *) v2);
}

int main(){

    int vet[10], qtNum, i, last, count;

    scanf("%d", &qtNum);

    for (i = 0; i < qtNum; i++)
        scanf("%d", &vet[i]);
    
    qsort(vet, qtNum, sizeof(int), compare);

    last = vet[0];
    count = 1;
    for (i = 1; i < qtNum; i++){
        if (vet[i] != last){
            printf("%d %d\n", last, count);
            count = 1;
            last = vet[i];
        } else 
            count++;
    }

    printf("%d %d\n", last, count);

    return 0;
}