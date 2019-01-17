#include <stdio.h>
#include <stdlib.h>
#define po 12.89
int main(int argc, char** argv) {
    
    int a,b=0,c=0;float total;
    for(;;){
        scanf("%d",&a);
        if(a==999)
        {
            break;
        }
        else
        {
            if(a>2)
            {
                b+=1;
                c+=(a-2);
            }
        }
    }
    
    total=c*po;
    printf("%.2f\n%d\n",total,b);
    
    return (EXIT_SUCCESS);
}

