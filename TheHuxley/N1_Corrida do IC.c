#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b[5],c,aux,t;
    for(a=0;a<5;a++)
    {
        scanf("%d",&b[a]);
    }
    a=0;  
    while(a<5)
    {
        for(c=0;c<5;c++)
        {
            if(b[c]>b[a])
            {
                aux=b[a];
                b[a]=b[c];
                b[c]=aux;
            }
                
        }
        a++;
    }
    
    
   
    c=0;
    for(a=5-1;a>=0;a--)
    {
        c+=1;
        printf("%d - %d km/h\n",c,b[a]);
    }
    
    
    return (EXIT_SUCCESS);
}
