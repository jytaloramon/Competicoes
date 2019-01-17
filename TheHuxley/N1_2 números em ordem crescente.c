#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int K,P;
    
    scanf("%d%d",&K,&P);
    if(P>K)
    {
        printf("%d %d",K,P);
    }
    else
    {
        printf("%d %d",P,K);
    }
    return 0;
}  
