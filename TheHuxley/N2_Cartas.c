#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int i,e=0,t=0,a,ultimoM;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        
        if(i!=0 && a>ultimoM)
        {
            t+=1;
            ultimoM=a;
        }
        else if(i!=0 && a<ultimoM)
        {
            e+=1;
            ultimoM=a;
        }
        ultimoM=a;
    }
    
    if(t==4 && e==0 )
    {
        printf("C\n");
    }
    else if(e==4 && t==0)
    {
        printf("D\n");
    }
    else
    {
        printf("N\n");
    }
    
    return (EXIT_SUCCESS);
}

