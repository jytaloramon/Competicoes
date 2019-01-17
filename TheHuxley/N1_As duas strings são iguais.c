#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char str1[30],str2[30];
    
    scanf("%s%s",&str1,&str2);
    if(strcmp(str1,str2)==0)
    {
        printf("IGUAIS\n");
    }
    else
    {
        printf("DIFERENTES\n");
    }
   
    return (EXIT_SUCCESS);
}
