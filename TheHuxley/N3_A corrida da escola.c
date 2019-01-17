#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int n, m, i, j, somaAluno, aux, menorTempoTotal = 10000000000000000, indexMelhorAluno = 0;

    scanf("%d%d", &n, &m);

    for ( i = 0; i < n; i++){
        somaAluno = 0;
        for ( j = 0; j < m; j++){
            scanf("%d", &aux);
            somaAluno += aux;
        }
        if(menorTempoTotal > somaAluno){
            menorTempoTotal = somaAluno;
            indexMelhorAluno = i+1;
        }
    }                       
    printf("%d\n", indexMelhorAluno);
    return (EXIT_SUCCESS);
}