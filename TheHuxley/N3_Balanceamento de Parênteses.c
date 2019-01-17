#include "stdio.h"
#include "stdlib.h"



int main(){

    int parents, conchetes, i, leituras, j;
    char text[100];

    scanf("%d", &leituras);
    getchar();

    for(i = 0; i < leituras; i++){
        gets(text);
        
        j = 0;
        parents = 0;
        conchetes = 0;

        while(text[j] != '\0'){
            if(text[j] == '('){
                parents++;

            } else if(text[j] == '['){
                conchetes++;

            } else if(text[j] == ')'){
                parents--;

            } else if(text[j] == ']'){
                conchetes--;
            }

            if(parents == -1 || conchetes == -1)
                break;
            j++;
        }

        if(parents == 0 && conchetes == 0){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
    }

    return 0;
}