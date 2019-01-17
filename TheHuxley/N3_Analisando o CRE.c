#include <stdio.h>
#include <stdlib.h>

struct cliente{
  char cre[5];
} usuario[999];

int main(int argc, char** argv) {
 
    int i,z;
    float a,soma=0,media,menor=10000;
    for(i=1;i>0;i++)
    {
        scanf(" %s",&usuario[i].cre);
        if(strcmp(usuario[i].cre,"999")==0)
        {
            break;
        }
        else
        {
            scanf("%f",&a);
            soma =soma+a;
            if(a<menor)
            { 
                menor=a;z=i;
            }
        }
    }
    media = soma/(i-1);
    
    printf("%s\n%.2f\n",usuario[z].cre,media);
    
    return (EXIT_SUCCESS);
}

