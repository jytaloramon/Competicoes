#include "stdio.h"
#include "stdlib.h"

int main(int *args, char *argv){

    int nP, nM, numAprov = 0;
    float nR;

    while(1){
        scanf("%d", &nP);

        if (nP < 0) break;

        scanf("%d %f", &nM, &nR);

        if(nP >= 40 && nM >= 21 && nR >= 7)
            numAprov++;
    }
    
    printf("%d\n", numAprov);

    return (0);
}