#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){

    int i, j, length;
    char input[257];

    scanf("%s", input);

    length = strlen(input);
    j = length - 1;
    
    for(i = 0; i < length / 2; i++){
        if(input[i] != input[j--])
            j = -1;
    }

    if(j != -1)
        printf("SIM\n%d\n", (length % 2 == 0 ? i : i + 1));
    else
        printf("NAO\n");
}   
