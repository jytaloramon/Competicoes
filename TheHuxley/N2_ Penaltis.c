#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int i,j,a[5][2],compu=0,edu=0,g,h,t,aux;
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);getchar();
            if(a[i][j]==1)
            {
                if(j==0)
                {
                    compu+=1;
                }
                else if(j==1)
                {
                    edu+=1;
                }
            }
            
        }
        g=compu-edu;
        t=edu-compu;
        h=5-(i+1);
        if(g>h || t>h)
        {
            break;
        }
    }
    
    while(compu==edu)
    {
        for(i=0;i<2;i++)
        {
            scanf("%d",&aux);
            if(aux==1 && i==0)
            {
                compu+=1;
            }
            else if(aux==1 && i==1)
            {
                edu+=1;
            }
        }
    }
    
    if(compu>edu)
    {
        printf("COMPUTACAO.RAR\n");
    }
    else if(edu>compu)
    {
        printf("EDUCACAO FISICA\n");
    }
    
    return (EXIT_SUCCESS);
}

