#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char cara[20];
    int i;
    scanf("%s",&cara);
    
    for(i=strlen(cara)-1;i>=0;i--)
    {
        printf("%c",cara[i]);    
    }
    printf("\n");
            
    return (EXIT_SUCCESS);
}

