#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int  i,a,c;
    char test[20][75];
    
    for(i=0;i>-1;i++)
    {
        
        gets(test[i]);
        a=strcmp(test[i],"the end!");
        if(a==0)
        {
            break;
        }
    }       
    
    for(c=0;c<i;c++)   
    {
        for(a=0;a<strlen(test[c]);a++)
        {
            printf("%c",toupper(test[c][a]));
        }
        printf("\n");
    }    
    
    
    return (EXIT_SUCCESS);
}

