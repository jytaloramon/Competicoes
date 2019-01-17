#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==c && c==b)
    {
        printf("equilatero\n");
    }
    else if(a==c || a==b || b==c)
    {
        printf("isosceles\n");
    }
    else
    {
        printf("escaleno\n");
    }
    return (EXIT_SUCCESS);
}

