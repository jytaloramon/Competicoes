#include "stdio.h"
#include "stdlib.h"

char text[15];
int permition[15];

void printPerm(int n, int posi){
    if (posi == n)
        printf("%s\n", text);
    
    for (int i = 0; i < n; i++){
        if(!permition[i]){
            text[posi] = i + 49;
            permition[i] = 1;
            printPerm(n, posi + 1);
            permition[i] = 0;
        }
    }
}

int main(){

    int max;

    scanf("%d", &max);
    text[max] = '\0';

    printPerm(max, 0);
    
    return 0;
}