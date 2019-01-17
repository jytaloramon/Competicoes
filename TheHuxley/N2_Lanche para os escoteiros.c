#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a;
    float e,b,t;
    scanf("%d",&a);
    e=4.15/23;
    b=3.89/8;
    t=((a*2)*e)+(a*b);
    printf("%.2f\n",t);
    
    return (EXIT_SUCCESS);
}
