#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y, i, espace,sub = 1;
    scanf("%d%d",&x, &y);
    espace = x;
    if(x%2 == 0){
        sub = 0;
    }
    for(i = 1; i <= y; i++){
        printf("%d",i);
        if(i%x == 0) {
            printf("\n");
            espace += x;
        }
        else if( i < espace-sub){
            printf(" ");
            espace++;
        }

    }
    
    printf("\n");
    return 0;
}