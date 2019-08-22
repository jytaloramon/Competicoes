#include "stdio.h"
#include "stdlib.h"

char fib(int last, int actual, int key){
    if (actual == key)
        return 'O';
    if (actual > key)
        return 'o';

    return fib(actual, last + actual, key);
}

int main(int argc, char const *argv[]){
    
    int i, number;

    scanf("%d", &number);

    for (i = 1; i <= number; i++)
        printf("%c", fib(1, 1, i));
    
    printf("\n");

    return EXIT_SUCCESS;
}