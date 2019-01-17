#include "stdio.h"
#include "stdlib.h"

int main(int *argv, char *args){

    char l;
    int i, q[4] = {0, 0, 0}, t = 0;

    for(i = 0; i < 5; i++){
        scanf(" %c", &l);
        q[l-97]++;
    }
    
    for(i = 0; i < 3; i++){
        if(q[i] % 2 == 0){
            t++;
        }
    }

    if(t == 2) printf("sim\n");
    else printf("nao\n");

    return (EXIT_SUCCESS);
}