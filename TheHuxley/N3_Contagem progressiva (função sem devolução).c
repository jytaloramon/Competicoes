#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    int x, i, j;

    scanf("%d", &x);

    for (i = 1; i <= x; i++){
        printf("%d", i);

        for (j = 0; j < i - 1; j++)
            printf("-%d", i);
            
        printf("\n");
    }
    
    return 0;
}
