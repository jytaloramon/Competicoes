#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {

    char nome1[256],nome2[256],aux[256];
    int a,b,c,d,i,e,f;
    scanf("%d",&a);getchar();
    
    for(i=0;i<a;i++)
    {
        c=0;e=0;f=0;
        gets(nome1);
        for(b=0;b<strlen(nome1);b++)
        {
            if(nome1[b]!=' ')
            {
                aux[c]=nome1[b];
                nome2[c]=toupper(nome1[b]);
                c++;
            }
        }
        aux[c]='\0';
        nome2[c]='\0';
        
        for(d=strlen(aux)-1;d>=0;d--,f++)
        {
            nome1[f]=toupper(aux[d]);
        }
        nome1[f]='\0';
        e=strcmp(nome1,nome2);
        if(e==0)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }
    
    return (EXIT_SUCCESS);
}

