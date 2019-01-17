#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(b-c<a && a<b+c && a-c<b && b<a+c && a-b<c && c<a+b)
    {
        if(a==b && a!=c || a==c && c!=b || c==b && b!=a )
        {
            printf("ISOSCELES\n");
        }
        else if(a==b && b==c)
        {
            printf("EQUILATERO\n");
        }
        else
        {
            printf("ESCALENO\n");
        }
    }
    else
    {
        printf("-\n");
    }
    
    return (EXIT_SUCCESS);
}

