#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int i, j, num;
    scanf("%d", &num);

    while(num > 0){
        printf("%d", num);
        for(i = 1; i < num; i++) printf("-%d", num);
        printf("\n");
        
        num--;
    }
}