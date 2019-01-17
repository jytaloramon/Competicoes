#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int b,c=0;
    float a;
    for(b=0;b<7;b++)
    {
        scanf(" %f",&a);
        if(a>=8)
        {
            c+=1;
        }
    }
    if(c>=5)
    {
        printf("Desempenho otimo\n");
    }
    else if(c>=3 && c<5)
    {
        printf("Desempenho razoavel\n");
    }
    else
    {
        printf("Desempenho ruim\n");
    }
    
    return (EXIT_SUCCESS);
}

