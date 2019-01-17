#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a=3,t=1,b,aux,i;
    scanf("%d",&b);
    aux=b-1;
    for(i=0;i<aux;i++)
    {   
        if(t%2==0)
        {
            a+=1;t+=1;
        }
        else
        {
            a+=4;t+=1;
        }
        
    }
    printf("%d\n",a);
    
    return (EXIT_SUCCESS);
}

