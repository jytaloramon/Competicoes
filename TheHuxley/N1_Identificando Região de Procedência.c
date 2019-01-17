#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a;
    scanf("%d",&a);
    if(a==1)
    {
        printf("Nordeste\n");
    }
    else if(a==2)
    {
        printf("Norte\n");
    }
    else if(a==3 || a==4)
    {
        printf("Centro-Oeste\n");
    }
    else if(a>=5 && a<=9)
    {
        printf("Sul\n");
    }
    else if(a>=10 && a<=15)
    {
        printf("Sudeste\n");
    }
    
    return (EXIT_SUCCESS);
}

