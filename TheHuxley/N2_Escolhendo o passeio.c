#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i,j,t=0,e=0;
    char pala[6][30];
    
    for(i=0;i<7;i++)
    {
        gets(pala[i]);
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<strlen(pala[i]);j++)
        {
            pala[i][j]=toupper(pala[i][j]);
        }
        pala[i][j]='\0';
    }
    
    for(i=0;i<7;i++)
    {
        if(strcmp(pala[i],"BOLICHE")==0)
        {
            t+=1;
        }
        else if(strcmp(pala[i],"CINEMA")==0)
        {
            e+=1;
        }
    }
    
    if(t>e)
    {
        printf("BOLICHE\n");
    }
    else
    {
        printf("CINEMA\n");
    }
    return (EXIT_SUCCESS);
}

