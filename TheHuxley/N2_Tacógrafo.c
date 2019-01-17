#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, h, vm, t = 0;
    scanf("%d", &i);

    for(i; i > 0; i--){
        scanf("%d %d", &h, &vm);
        t += (h * vm);
    }
    printf("%d\n", t);
    
    return 0;
}