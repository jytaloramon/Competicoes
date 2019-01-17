#include "stdio.h"
#include "stdlib.h"

int main(int *args, char *argv){

    int q, t, i, letra[256], bing = 0, b[2];

    scanf("%d", &t);

    char text[t][201], l;

    getchar();
    for(i = 0; i < t; i++){
        gets(text[i]);
    } 
    scanf("%c", &l);
  
    for(i = 0; i < 256; i++){
        letra[i] = 0;
    }

    for(i = 0; i < t; i++){
        q = 0;
        while(text[i][q] != '\0'){
            letra[text[i][q]]++;
            q++;
        }
    }

    for(i = 1; i < 256; i++){
        if(letra[i] > letra[bing]){
            bing = i;
        }
    }

    printf("%c %d %d\n", bing, letra[bing], letra[l]);

    return(EXIT_SUCCESS);
}