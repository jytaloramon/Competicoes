#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {

    int i, q[3], v, j, b[3];

    for(i = 0; i < 3; i++){
        scanf("%d", &q[i]);
        b[i] = q[i];
        j = i;
        while(j > 0 && q[j] < q[j-1]){
            v = q[j];
            q[j] = q[j-1];
            q[j-1] = v;
            j--;
        }
    }

    for(i = 0; i < 3; i++){
        printf("%d\n", q[i]);  
    }

    printf("\n");
    
    for(i = 0; i < 3; i++){
        printf("%d\n", b[i]);  
    }

    return 0;
}