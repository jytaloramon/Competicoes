#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char pala1[55], pala2[55];
    int i;
    scanf("%s%s", pala1, pala2);
    i = strlen(pala2) - 1;
    while(i >= 0){
        printf("%c", pala2[i]);
    }
    printf(" ");
    i = strlen(pala1) - 1;
    while(i >= 0){
        printf("%c", pala1[i]);
    }
    return 0;
}