#include "stdio.h"
#include "stdlib.h"

int main(int *args, char *argv){

    int convi, total = 0, p = 0, dif;

    scanf("%d", &convi);

    while(convi > -1){
        if(convi > 15){
            if(convi > 25) dif = 10;
            else dif = convi - 15;
            total += dif;
            convi = 15;
        } 
        p += (convi + dif) + 1;
        dif = 0;
        scanf("%d", &convi);
    }

    printf("%d.00\n%d\n", total * 42, p);

    return (EXIT_SUCCESS);
}