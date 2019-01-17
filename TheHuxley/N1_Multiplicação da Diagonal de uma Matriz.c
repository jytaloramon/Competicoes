#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b,c[4][4],d;
    for(;;)
    {
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
        
        for(b=0;b<4;b++)
        {
            for(d=0;d<4;d++)
            {
                scanf("%d",&c[d][b]);
            }
        }
        
        for(b=0;b<4;b++)
        {
            for(d=0;d<4;d++)
            {
                if(d==b)
                {
                    printf("%d",c[b][d]*a);
                }
                else
                {
                    printf("%d",c[b][d]);
                }
                if(d<4)
                {
                    printf(" ");
                }
            }printf("\n");
        }
    }
    
    return (EXIT_SUCCESS);
}

