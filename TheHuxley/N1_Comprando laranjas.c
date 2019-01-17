#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,e;
    float c,d;
    scanf("%d",&a);
    c=8.35/12;
    d=a*c;
    e=a/12;
    printf("%d\n%.2f\n",e,d);
    
    return (EXIT_SUCCESS);
}

