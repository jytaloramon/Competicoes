#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
   
    int i, qt, count;
    float v;

    scanf("%d", &qt);
    
    for (i = 0; i < qt; i++){
        scanf("%f", &v);

        count = 0;

        while (v > 1){
            v = v / 2;
            count++;
        }
        
        printf("%d dias\n", count);
    }

    return 0;
}
