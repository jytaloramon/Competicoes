#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x, y, i, j, vetor[102][102], somaDiagonalPrin = 0, somaDiagonalSecu = 0, nuPosi = 0, nuNega = 0;
    
    scanf("%d%d", &x, &y);
    
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            scanf("%d", &vetor[i][j]);
            if(vetor[i][j] > 0){
                nuPosi++;
            }
            else if(vetor[i][j] < 0){
                 nuNega++;
            }
        }
    }
    
    printf("Matriz formada:\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("%d", vetor[i][j]);
            if(j < y-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    
    if(x == y){
        for(i = 0; i < x; i++){
            somaDiagonalPrin += vetor[i][i];
        }
        for(i = 0; i < y; i++){
            somaDiagonalSecu += vetor[i][x-1];
            x--;
        }
        printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.\n", somaDiagonalPrin, somaDiagonalSecu);
    }
    else{
         printf("A diagonal principal e secundaria nao pode ser obtida.\n");          
    }
    printf("A matriz possui %d numero(s) menor(es) que zero.\nA matriz possui %d numero(s) maior(es) que zero.\n", nuNega, nuPosi);

}
