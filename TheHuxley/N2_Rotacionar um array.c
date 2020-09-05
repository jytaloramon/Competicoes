#include "stdio.h"
#include "stdlib.h"

int arr[100000];

int main(){

   int i, max, rotate;

    scanf("%d", &max);

    for (i = 0; i < max; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &rotate);

    for (i = 0; i < max; i++)
        printf("%d\n", arr[(i + rotate) % max]);

    return 0;
}