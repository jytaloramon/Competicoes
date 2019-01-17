#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    int a,b,c=0;
    
    scanf("%d",&a);
    char f[a+1],g[a+1];
    
    for(b=0;b<a;b++){
        scanf(" %c",&f[b]);
    }
    for(b=0;b<a;b++){
        scanf(" %c",&g[b]);
    }
    for(b=0;b<a;b++){
        if(g[b]==f[b]){
            c=c+1;
        }
    }
    
    printf("%d\n",c);
    
    return (EXIT_SUCCESS);
}
