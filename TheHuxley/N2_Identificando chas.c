#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a,b,c=0,i=0;
    scanf("%d",&a);
    if(a>=1 && a<=4)
    {
        while(i<5)
        {
            scanf("%d",&b);
            if(b>=1 && b<=4)
            {
                if(b==a)
                {
                    c+=1;
                }
            }
            i++;
        }
        printf("%d\n",c);
    }
    
    return (EXIT_SUCCESS);
}

