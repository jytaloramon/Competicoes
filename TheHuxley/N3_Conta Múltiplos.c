#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b,c,aux,cont;;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        aux=b;
        b=a;
        a=aux;
    }
    c=b;
    while(c<50)
    {
        if(c%b==0 && c%a==0)
        {
            cont+=1;
        }
        c+=b;
    }
    printf("%d\n",cont);
    
    return (EXIT_SUCCESS);
}

