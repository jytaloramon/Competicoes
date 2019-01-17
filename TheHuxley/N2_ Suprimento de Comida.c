#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,i;
    float b,c;
    scanf("%d",&a);
    for(a;a>0;a--)
    {
        i=0;
        scanf("%f",&b);
        while(1)
        {   
            if(b>1)
            {
                b=b/2;
                i+=1;
            }
            else
            {
                break;
            }
        }
        printf("%d dias\n",i);
    }
    
    return (EXIT_SUCCESS);
}
