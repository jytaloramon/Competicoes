#include "stdio.h"
#include "stdlib.h"

int list[1100];

int compare(const void *a, const void *b){
    return *((int *) a) - *((int *) b);
}

int main(int argc, char const *argv[]){
    
    int x, i, count = 0;
    
    while (scanf("%d", &list[count]) != EOF)
        count++;

    qsort(list, count, sizeof(int), &compare);
    
    if (count % 2)
        printf("Mediana = %d\n", list[count / 2]);
    else
        printf("Mediana = %.1f\n", (list[count / 2 - 1] + list[count / 2]) / 2.0);

    return 0;
}
