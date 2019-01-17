#include "stdio.h"
#include "stdlib.h"

int main(int *argv, char *args){

    int i, j = 0, n;
    char pala[10];

    while (1){
        scanf("%d", &n);
        j += (n+1); 

        scanf(" %[^\n]s", &pala);
        if((pala[0] == 'S' || pala[0] == 's') && (pala[1] == 'A' || pala[1] == 'a') && 
        (pala[2] == 'I' || pala[2] == 'i')&& (pala[3] == 'R' || pala[3] == 'r') && (pala[4] == '\0')){
            break;
        }
        
    }

    
    printf("%d\n%d.00\n", j, j * 14);

    return (EXIT_SUCCESS);
}