#include "stdio.h"
#include "stdlib.h"

int main(int *argc, char *argv){
   
    double n, s = 0;
    int i;

    for(i = 0; i < 3; i++){
        scanf("%lf", &n);
        s += n;
    }
    s /= 3;

    if(s >= 7) printf("aprovado\n");
    else if(s < 7 && s >= 3) printf("prova final\n");
    else printf("reprovado\n");

    return (EXIT_SUCCESS);
}