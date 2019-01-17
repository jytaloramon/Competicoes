#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i = 0;
    char palavra[501];
    gets(palavra);
    while(palavra[i] != '\0' ){
        i++;
    }
    printf("%d\n", i);
    return 0;
}