#include "stdio.h"
#include "stdlib.h"

int main(){
    
    int a, b, i = 2, aux, divisor = 1;
    scanf("%d %d", &a, &b);
    if(a > b ){aux = a; a = b; b = aux;}
    while(i <= a){
        if(a%i == 0 && b%i == 0)
            divisor = i;
        i++;
    }
    printf("%d\n", divisor);
    return 0;
}