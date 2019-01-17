#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i,a,b,c,resto,aux,div,mdc,t,h;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d%d",&b,&c);
        t=b,h=c;
        if(b<c){aux=c;c=b;b=aux;}
        resto=b%c;
            div=c;
            while(resto!=0)
            {   aux=resto;
                resto = div%resto;
                div = aux;
            }
        
        printf("MDC(%d,%d) = %d\n",t,h,div);
    }
    
    return (EXIT_SUCCESS);
}

