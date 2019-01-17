#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a,b,i;
    char aux;
    
    for(;;)
    {
        scanf("%d",&a);
        if(a == 0)
        {
            break;
        }
        else
        {
           char c[a],d[a]; 
           i=0;b=a-1;
           scanf(" %s",&c);
           while(i<a/2)
           {
               aux=c[i];
               c[i]=c[b];
               c[b]=aux;
               
                i++;b--;   
           }
            
           printf("%s\n",c);
          
        }
    }
    return (EXIT_SUCCESS);
}

