#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char nome[100][21],vet[21];
    int a,b,i,j,aux;
    scanf("%d%d",&a,&b);getchar();
    
    
        for(i=0;i<a;i++)
        {
            scanf("%s",&nome[i]);
        }
    
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                
                if(strcmp(nome[j],nome[i])>0)
                {
                    strcpy(vet,nome[i]);
                    strcpy(nome[i],nome[j]);
                    strcpy(nome[j],vet);
                }
            }
        }
        printf("%s\n",nome[b-1]);
    
    
    return (EXIT_SUCCESS);
}
