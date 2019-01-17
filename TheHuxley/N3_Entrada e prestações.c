#include "stdio.h"
#include "stdlib.h"

int main(){

    float precoT;
    int t;

    scanf("%f", &precoT);
    t = precoT / 3;
    precoT -= (t*2);

    printf("%.2f\n%d.00\n%d.00\n", precoT, t, t);
    return 0;
}