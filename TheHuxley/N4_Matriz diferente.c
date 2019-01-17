#include "stdio.h"
#include "stdlib.h"

int main(int *argc, char *argv){
    
    int j, i, m, v;

    scanf("%d", &m);

    for(i = 0; i < m; i++){
        j = 1;
        v = 1;
        printf("%d", j++);
        for(j; j <= m; j++){
            if(j <= i+1) v = j;
            printf(" %d", v);
        }
        printf("\n");
    }

    return (EXIT_SUCCESS);
}
