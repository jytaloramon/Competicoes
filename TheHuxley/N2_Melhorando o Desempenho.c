#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a,b=0,r=1;
    double c[5];
    for(a=0;a<6;a++)
    { 
        
        scanf("%lf",&c[a]);
        while(r<1)
        {
            if(c[a]>c[a-1])
            {
                b +=1;
            }r++;
        }r=0;
    }
    if(b==5)
    {
        printf("Ganha brinquedo\n");
    }
    else
    {
        printf("Sem brinquedo\n");
    }
    
    return (EXIT_SUCCESS);
}

