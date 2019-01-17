#include "stdio.h"
#include "stdlib.h"

int main() {

    int i, q = 0;
    float pO, pB;

    for(i = 0; i < 5; i++){
        scanf("%f %f", &pO, &pB);
        if((pB*100) / pO <= 80){
            q++;
        }
    }
    printf("%d\n", q);

    return 0;   
}