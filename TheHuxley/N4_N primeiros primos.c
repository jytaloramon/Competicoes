#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(int argc, char const *argv[]){

    int i = 3, count = 1, n, r, j, result;

    scanf("%d", &n);

    if (n > 0)
        printf("2\n");

    while (count < n){
        r = sqrt(i); 
        result = 1;

        for (j = 3; j <= r; j += 2){
            if(i % j == 0){
                result = 0;
                break;
            }
        }

        if(result){
            count++;
            printf("%d\n", i);
        }

        i += 2;
    }
    
    return 0;
}
