#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int qt , i = 1;

    scanf("%d", &qt);   

    while(qt > 0){
        printf("%d\n", i);
        i += 2;
        qt--; 
    }
}