#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a,i,rest,t,aux;
    
    while(1)
    {   
        t=0;rest=1;
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
        else
        {
            for(i=0;i<a;i++)
            {   
                printf("%d",t);
                aux=t;
                t=t+rest;
                rest=aux;
                if(i<a-1)
                {
                    printf(" ");
                }
                else
                {
                    continue;
                }
                
            }
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}

