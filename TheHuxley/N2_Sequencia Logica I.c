#include <stdio.h>
#include <stdlib.h>

void main() {
    
    int i, x;

    scanf("%d",&x);

    for(i = 1; i <= x; i++){
        printf("%d %d %d\n",i, i*i, i*i*i);
        printf("%d %d %d\n",i, i*i+1, i*i*i+1);
    }
    
}