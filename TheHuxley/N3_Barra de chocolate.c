#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a,i=0,rest=0,b;
    scanf("%d",&a);
    while(i<a)
    {
        scanf("%d",&b);
        rest=(b-1)+rest;        
        i++;
    }
    
    printf("%d\n",rest);
    
    return (EXIT_SUCCESS);
}

