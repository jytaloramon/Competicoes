#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float a,c=0;
    int b;
    for(b=0;b<3;b++){
        scanf("%f",&a);
        c += a;
    }
    c=c/3;
    
    if(c>=7)
    {
        printf("aprovado\n");
    } 
    else if(c>=3 && c<7)
    {
        printf("prova final\n");
    } 
    else{
        printf("reprovado\n");
    }
    
    return (EXIT_SUCCESS);
}

