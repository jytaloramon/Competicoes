#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b,c;
    float d,f,t,q;
    scanf("%d%d%d",&a,&b,&c);
    
    d=a/60.00;
    q=b/60.00;
    f=q-d;
    t=c/f;
    
    
    printf("%.0f minutos\n",t);
    
    return (EXIT_SUCCESS);
}

