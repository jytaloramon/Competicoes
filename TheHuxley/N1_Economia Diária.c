#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int b=0,d=0;
    float a,aux,soma;
    scanf("%f",&a);
    aux=a;soma=a;
    for(b;b<6;b++)
    {
        scanf("%f",&a);
        if(a-aux>=0.5)
        {
           d+=1; 
        }
        soma+=a;
        aux=a;
    }    
    printf("R$ %.2f\n%d\n",soma,d);
    
    return (EXIT_SUCCESS);
}

