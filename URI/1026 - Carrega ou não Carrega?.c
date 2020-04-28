#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    unsigned int x1, x2;

    while (scanf("%u %u", &x1, &x2) != EOF)
        printf("%u\n", x1 ^ x2);

    return 0;
}
