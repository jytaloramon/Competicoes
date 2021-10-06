#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){

    int value, last_el, sum;

    scanf("%d", &value);

    while (value != 0){
        last_el = 1 + (value / 2 - 1) * 2;
        sum = (value / 2) * (1 + last_el) / 2;
        printf("%d - %d\n", sum + value, sum);

        scanf("%d", &value);
    }

    return 0;
}
