#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,i,j=0,aux,t=0,f=1,q=0;
    scanf("%d",&a);
    int vet[a];
    
    for(i=0;i<a;i++)
    {
        scanf("%d",&vet[i]);
    }
    while(j<f)
    {
        
        for(i=0;i<a-1;i++)
        {
            
            if(vet[i]>vet[i+1])
            {
                q+=1;
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
                t+=1;
            }
        
        }
        if(q>0)
        {
            q=0;
            f+=1;
        }
        j++;
    }
    printf("A melhor troca leva %d passos\n",t);
    
    
    return (EXIT_SUCCESS);
}

