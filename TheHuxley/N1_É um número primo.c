#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b,c,d,e;
    
    for(;;)
    {   
        e=0;b=0;
        scanf("%d",&a);
        if(a==-1)
        {
            break;
        }
        else
        {
            for(d=1;d<=a;d++)
            {
               b=a%d;
               if(b==0)
               {
                   e +=1;
               }
            }
            if(e==2)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
            
        }
    }
    
    return (EXIT_SUCCESS);
}