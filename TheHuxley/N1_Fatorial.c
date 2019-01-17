#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int ler, soma, i;

    while (ler >= 0) {
        scanf("%d", &ler);
        if (ler >= 0 && ler <= 12) {
            soma = 1;
            for (i = ler; i > 0; i--) {
                soma *= i;
            }
            printf("%d\n", soma);
        }
    }

    return (EXIT_SUCCESS);
}

