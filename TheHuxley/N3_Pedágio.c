#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int L,D,K,P;
    
    scanf("%d%d%d%d",&L,&D,&K,&P);
    int a=L/D;
    int b=L*K;
    int c=P*a;
    int d=b+c;
    
    printf("%d\n",d);
    
    return 0;
}  
