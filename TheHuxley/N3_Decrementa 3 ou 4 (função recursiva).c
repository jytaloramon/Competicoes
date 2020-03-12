#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    int v, i = 100000, q = 0;

    scanf("%d", &v);

    while(i >= 10 && q == 0){
        q = v / i;
        i /= 10; 
    }

    printf("%d\n", v - (q % 2 ? 3 : 4));
    
    return 0;
}