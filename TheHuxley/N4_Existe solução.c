#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int *args, int *argv){

    int a, b, c, i, q, salt;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b){i = a; q = b; salt = a;}
    else {i = b; q = a; salt = b;}

    for(i; i < c; i += salt){
        if((c - i) % q == 0){
            printf("S\n");
            return 0;
        }
    }

    printf("N\n");

    return(EXIT_SUCCESS);
}
