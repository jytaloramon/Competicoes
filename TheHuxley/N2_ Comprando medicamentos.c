#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b;
    scanf("%d",&a);
    a=35*a;
    b=a%4;
    a=(a-b)/4;
    printf("%d\n%d\n",a,b);
    
    return (EXIT_SUCCESS);
}

