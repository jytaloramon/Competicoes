#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
     int a,b=0,c;  
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&c);
        b=b+c;
        a--;
    }
    printf("%d\n",b);
    
    return (EXIT_SUCCESS);
}

