#include "stdio.h"
#include "stdlib.h"

int main(){

    int v, el, sum;

    scanf("%d", &v);

    el = (v * v + v) / 2;
    sum = (v * v + v) * (v + 2) / 6;

    printf("%d %d %c\n", el, sum, (el % 2 == 0 && sum % 2 == 0) ? 'P' : (el % 2 == 1 && sum % 2 == 1) ? 'I' : 'N');

    return 0;
}