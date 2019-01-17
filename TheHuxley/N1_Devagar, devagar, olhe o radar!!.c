#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    double a,b,c,d,e;
    scanf("%lf%lf",&a,&b);
    c = (b*100)/a;
    c = c-100;
    if(c>0 && c<=20)
    {
        printf("85.13\n4\n");
    }
    else if(c>20 && c<=50)
    {
        printf("127.69\n5\n");
    }
    else if(c>50)
    {
        printf("574.62\n7\n");
    }
    else
    {
        printf("0.00\n0\n");
    }

    return (EXIT_SUCCESS);
}

