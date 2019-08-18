#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){

    int list[5], i, lastNumber, seq = 1;

    for (i = 0; i < 5; i++)
        scanf("%d", &list[i]);
    
    for (i = 1; i < 5 && seq; i++)
        seq = list[i - 1] < list[i];
       
    if (seq)
        printf("C\n");
    else {
        seq = 1;
        for (i = 1; i < 5 && seq; i++)
            seq = list[i - 1] > list[i];
        
        seq ? printf("D\n") : printf("N\n");
    }
    
    return 0;
}
