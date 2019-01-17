#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j, conti = 1, soma;
    scanf("%d", &n);
    int camp[n + 1][n + 1];

    for (i = 0; i < n; i++) {
        camp[n][i] = 0;
    }

    for (i = 0; i < n; i++) {
        camp[i][n] = 0;
        for (j = 0; j < n; j++) {
            scanf("%d", &camp[i][j]);
            camp[i][n] += camp[i][j];
            camp[n][j] += camp[i][j];
        }
    }
    // very Soma lihna
    for (i = 1; i < n; i++) {
        if (camp[i - 1][n] != camp[i][n]) {
            conti = 0;
            break;
        }
    }

    if (conti) {
        // very Soma coluna
        for (i = 0; i < n; i++) {
            if (camp[n][i] != camp[0][n]) {
                conti = 0;
                break;
            }
        }
    }
    if (conti) {
        soma = 0;
        for (i = 0; i < n; i++) {
            soma += camp[i][i];
        }
    }

    if(soma == camp[0][n]){
        soma = 0;
        j = n - 1;
        for (i = 0; i < n; i++){
            soma += camp[i][j];
            j--;
        }
        if(soma != camp[0][n]){
           
            conti = 0;
        }
    }
    else{
        conti = 0;
    }

    if(conti == 1){
        printf("%d\n", camp[0][n]);
    }
    else{
        printf("-1\n");
    }
    return 0;
}