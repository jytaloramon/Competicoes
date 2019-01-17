#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a[5],i,aux,r;
    
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(r=0;r<5;r++)
        {
            if(a[r]<a[i])
            {
                aux=a[i];
                a[i]=a[r];
                a[r]=aux;
            }
        }
    }
    printf("%d\n%d\n%d\n",a[4],a[2],a[0]);
    
    return (EXIT_SUCCESS);
}

