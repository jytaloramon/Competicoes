#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a,b,prego=0,sobra;
    float valor,t=12;
    for(;;)
    {
        scanf("%d",&a);
        b=a%2;
        if(b==0)
        {
            prego+=a;
            if(prego>t)
            {
                t+=12;
            }
        }
        else
        {
            break;
        }
    }
    sobra=t-prego;
    valor=(7.89*t)/12;
    printf("%.2f\n%d\n",valor,sobra);
    
    return (EXIT_SUCCESS);
}

