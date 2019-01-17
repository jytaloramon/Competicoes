#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int main(int *args, char *argv){
    
    char test[600];
    int i = 0, maiusc = 1;

    gets(test);

    while(test[i] != '\0'){
        if(test[i] == '.'){
            maiusc = 1;

        } else if(test[i] != ' '){
            if(test[i] == '4') test[i] = 'a';
            else if(test[i] == '5') test[i] = 'e';
            else if(test[i] == '1') test[i] = 'i';
            else if(test[i] == '0') test[i] = 'o';
            else if(test[i] == '2') test[i] = 'u';
            
            if(maiusc){test[i] = toupper(test[i]); maiusc = 0;}      
        }
        i++;
    }

    printf("%s\n", test);
    
    return (EXIT_SUCCESS);
}