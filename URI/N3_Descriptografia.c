#include "stdio.h"
#include "stdlib.h"

int main() {

    int i = 0, pA = 0, pf = 0;
    char string[110];
    scanf("%s", &string);

    while(string[i] != '\0'){
        if(string[i] == '*'){
            printf("(%d", i+1);
            pf++;

        } else{
            printf("%d",i+1);
        }
        i++;
    }

    for(pf; pf > 0; pf--){
        printf(")");
    }    
    printf("\n");
    
    return 0;   
}