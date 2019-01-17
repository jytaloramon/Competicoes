#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){

    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    float f = (a + b + c) / 3.00;

    printf("%.2e\n", f);

    return 0;
}