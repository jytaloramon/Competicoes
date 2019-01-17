#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double a;
    scanf("%lf",&a);
    if(a>=0 && a<=25.0000)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (a>=25.00001 && a<=50.0000000)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(a>=50.00000001 && a<=75.000000000)
    {
        printf("Intervalo (50,75]\n");
    }
    else if (a>75.000000000 && a<100)
    {
        printf("Intervalo (75,100]\n");
    }
    else 
    {
        printf("Fora de intervalo\n");
    }
    
    return (EXIT_SUCCESS);
}

