#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) {
    float a,b,c,delta,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("NEESG\n");
    }    
    else
    {
        delta = pow(b,2)-4*a*c;
        if(delta<0)
        {
            printf("NRR\n");
        }
        else
        {
            x1= (-b-(sqrt(delta)))/(2*a);
            x2= (-b+(sqrt(delta)))/(2*a);
            printf("%.2f\n%.2f\n",x2,x1);
        }
    }
    return (EXIT_SUCCESS);
}

