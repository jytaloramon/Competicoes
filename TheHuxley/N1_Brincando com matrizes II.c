#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

int main(){

    int v, i, j, minV = INT_MAX,
        sumVNDiag = 0, sumVP = 0, countVP = 0;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &v);
            
            if (i != j)
                sumVNDiag += v;
            if (v < minV)
                minV = v;
            if (v > 0){
                sumVP += v;
                countVP++;
            }
        }
    }

    printf("%.2lf %d %d %d\n", (double) sumVP / countVP, minV, !(minV % 2), sumVNDiag);

    return 0;
}