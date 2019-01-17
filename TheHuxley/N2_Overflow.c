#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a[3],soma;
    char b;
    scanf(" %d",&a[1]);
    scanf(" %d",&a[2]);
    scanf(" %c",&b);
    scanf(" %d",&a[3]);
    if(b=='+')
    {
        soma=a[3]+a[2];
        if(soma<=a[1])
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n"); 
        }
    }
    
    else if(b=='*')
    {
        soma=a[3]*a[2];
        if(soma<=a[1])
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n"); 
        }
    }
    
    return (EXIT_SUCCESS);
}

