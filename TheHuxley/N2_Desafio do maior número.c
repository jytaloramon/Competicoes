#include <stdio.h>
#include <stdlib.h>

int main(int *argc, char *argv){

    int nu, maior;

    while (1){

        scanf("%d", &nu);

        if (nu == 0)
            break;
        if (nu > maior)
            maior = nu;
    }

    printf("%d\n", maior);
}