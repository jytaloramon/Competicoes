#include "stdio.h"
#include "stdlib.h"

int main(){

    float total, pri, seg, tec;

    scanf("%f", &total);
    printf("%.2f\n%.2f\n%.2f\n", total * 0.6, total * 0.3, total * 0.1);

    return 0;
}