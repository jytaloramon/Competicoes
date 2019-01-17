#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a==1 || a==0) && (b==1 || b==0) && (c==1 || c==0))
    {
        if(a!=b && a!=c)
        {
            printf("A\n");
        }
        else if(b!=c &&b!=a)
        {
            printf("B\n");
        }
        else if(c!=b && c!=a)
        {
            printf("C\n");
        }
        else
        {
            printf("*\n");
        }
    }
    
    return (EXIT_SUCCESS);
}

