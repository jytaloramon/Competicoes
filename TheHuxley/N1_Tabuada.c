#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a,b,mul;
    scanf("%d",&a);
    for(b=1;b<=9;b++)
    {
        mul=a*b;
        printf("%d X %d = %d\n",a,b,mul);
    }
    return (EXIT_SUCCESS);
}

