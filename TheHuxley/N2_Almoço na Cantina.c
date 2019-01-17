#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    char comida[20],suco[20];
    int i;
    float preco=0;
    
    scanf("%s%s",&comida,&suco);
    
    for(i=0;i<strlen(comida);i++)
    {
        comida[i]=toupper(comida[i]);
    }
    for(i=0;i<strlen(suco);i++)
    {
        suco[i]=toupper(suco[i]);
    }
    
    if(strcmp(comida,"ESTROGONOFE")==0)
    {
        preco+=11;
        
        if(strcmp(suco,"REFRIGERANTE")==0)
        {
            preco+=3;
        }
        else if(strcmp(suco,"SUCO")==0)
        {
            preco+=2.50;
        }
        
    }
    
    else if(strcmp(comida,"LASANHA")==0)
    {
        preco+=8;
        
        if(strcmp(suco,"REFRIGERANTE")==0)
        {
            preco+=3;
        }
        else if(strcmp(suco,"SUCO")==0)
        {
            preco+=2.50;
        }
        
    }
    
    printf("%.2f\n",preco);
    
    return (EXIT_SUCCESS);
}

