#include "stdio.h"
#include "stdlib.h"

int main(int *args, char *argv){

    char l1, l2, aux;
    int q;

    scanf("%c %c", &l1, &l2);

    if(l2 < l1){aux = l1; l1 = l2; l2 = aux;}

    q = (l2 - l1);
    if(q % 2 == 1){
        q /= 2;
        printf("%c\n%c\n", l1 + q, l2 - q);
    } else{
        q /= 2;
        printf("%c\n", l1 + q);
    }

    return (EXIT_SUCCESS);
}