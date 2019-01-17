#include "stdio.h"
#include "stdlib.h"

int main(){

    int valor, i, q, v = 0;
    scanf("%d", &valor);
    
    int test[1000];

    while(valor > 1){
        q = valor % 2;
        test[v++] = q;
        valor /= 2; 
    }
    printf("%d\n", valor);
    for(v--; v >=0; v--){
        printf("%d\n", test[v]);
    }

    return 0;
}