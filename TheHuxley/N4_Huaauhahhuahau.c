#include "stdio.h"
#include "stdlib.h"

int main(int *args, int *argv){

    char risada[51], stringLimp[51];
    int i = 0, j = 0, meio;

    scanf("%s", &risada);

    while(risada[i] != '\0'){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            stringLimp[j] = risada[i];
            j++;
        }
        i++;
    }
    stringLimp[j] = '\0';
    meio = j / 2;
    j--;

    for(i = 0; i < meio; i++){
        if(stringLimp[i] != stringLimp[j]){
            printf("N\n");
            return 0;
        }
        j--;
    }
    printf("S\n");

    return(EXIT_SUCCESS);
}