#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float a,b;
    scanf("%f%f",&a,&b);
    if(a>b)
    {
        printf("%.2f\n",a*2);
    }
    else
    {
        printf("%.2f\n",b*2);
    }
    
    return (EXIT_SUCCESS);
}

