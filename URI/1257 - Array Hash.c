#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {

    int i, j, n, p, soma, q;
    char text[51];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        soma = 0;
        scanf("%d", &p);
        for(j = 0; j < p; j++){
            scanf("%s", &text);
            q = 0;
            while(text[q] != '\0'){
                soma += (q + ((int)text[q] - 65) + j);
                q++;
            }
        }

        printf("%d\n", soma);
    }

    return (EXIT_SUCCESS);
}