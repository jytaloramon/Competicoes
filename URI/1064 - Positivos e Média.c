#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    float v, sum = 0;
    int i, count = 0;

    for (i = 0; i < 6; i++){
        scanf("%f", &v);

        if (v > 0){
            count++;
            sum += v;
        }
    }

    printf("%d valores positivos\n%.1f\n", count, sum / count);

    return 0;
}
