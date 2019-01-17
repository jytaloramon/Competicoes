#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b,c;
    double t,soma;
    
    for(;;)
    {
        soma=0.00;
        t=1.00;c=0;
        scanf("%d",&a);
        if(a==-1)
        {
            break;
        }
        else
        {
            for(;;)
            {
                soma+=1/t;
                t+=1.00;
                c++;
                if(soma>a)
                {
                    break;
                }
                
            }
        }
        printf("%d\n",c);
    }
    
    return (EXIT_SUCCESS);
}

