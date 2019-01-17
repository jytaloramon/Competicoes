#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){

    int qt = 0, nu, soma;

    while(scanf("%d", &nu) != EOF){
        soma += nu; 
        qt++;
    }

    printf("Media = %.1f\n", (float) soma / qt);

    return 0;
}