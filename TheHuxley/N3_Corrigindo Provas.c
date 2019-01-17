#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){

    int i, aux, total = 0, hora, min;
    for(i = 0;i < 5;i++){
        scanf("%d", &aux);
        total += aux;
    }
    total /= 5;
    printf("%d\n", total);
    total *= 100;
    hora = total / 3600;
    total = total % (3600*hora);
    min = total/60;
    total = total %(60*min);
    printf("%d\n%d\n%d\n",hora, min, total);
    return 0;
}