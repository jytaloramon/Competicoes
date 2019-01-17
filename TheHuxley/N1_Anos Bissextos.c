#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        if( (a%4==0 && a%400==0) || (a%4==0 && a%100!=0)  )
        {
            printf("%d\n",a);c += 1;
        }    
    }    
    if(c==0)
    {
        printf("-1\n");
    }    
    
    
    return (EXIT_SUCCESS);
}

