#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int a,maior,menor,medio;
    
    scanf("%d",&a);
    maior=a;
    menor=a;
    scanf("%d",&a);
        if(a>maior){maior=a;}
        else{menor=a;}
    scanf("%d",&a);
        if(a>maior){medio=maior;maior=a;}
        else if (a<menor){medio=menor;menor=a;}
        else{medio=a;}
    
    printf("%d\n%d\n%d\n",menor,medio,maior);
         
    return (EXIT_SUCCESS);
}

