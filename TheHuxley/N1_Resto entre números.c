#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(b<a)
    {
        i=b;
        b=a;
        a=i;
    }
    
    for(a;a<b;a++)
    {
        if(a%5==2 || a%5==3)
        {
            printf("%d\n",a);
        }
    }
    return (EXIT_SUCCESS);
}

