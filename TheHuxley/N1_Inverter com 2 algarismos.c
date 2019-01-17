#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    int i,t;
    char num[3];
    scanf("%s",&num);
    t = strlen(num)-1; 
    
    if(num[t] == '0'){
        t -=1;        
    } 
    for(i = t; i>=0; i--){
         printf("%c",num[i]) ;
    }
    printf("\n" );  
    return (EXIT_SUCCESS);
}
