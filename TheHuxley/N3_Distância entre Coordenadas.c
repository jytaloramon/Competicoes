#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){

    int i, qt, pAx, pBx, pAy, pBy;

    scanf("%d", &qt);

    for (i = 0; i < qt; i++){
        scanf("%d %d %d %d", &pAx, &pAy, &pBx, &pBy);
        printf("%.2lf\n", sqrt(pow((double)pBx - pAx, 2) + pow((double)pBy - pAy, 2)));
    }
    
    return 0;
}
