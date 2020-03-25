#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    int a, b;

    scanf("%d %d", &a, &b);

    printf("a: %d b: %d\na: %d b: %d\n", a, b, b, a);

    return 0;
}
