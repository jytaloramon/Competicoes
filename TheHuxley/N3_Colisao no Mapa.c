#include <stdio.h>
#include <stdlib.h>

int n, m, matriz[1000][1000], i, j, qtLetra, inicioLinha, inicioColuna;
char codigo[1000];

int main() {
    
    scanf("%d%d", &n, &m); 

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    scanf("%d", &qtLetra);
    for(j = 0; j < qtLetra; j++){
        scanf("%c ", &codigo[j]);
    }
    getchar();
    scanf("%d%d", &inicioLinha, &inicioColuna);

    for(i = 0; i < qtLetra; i++){
        if(codigo[i] == 'C'){
            if(inicioLinha-1 >= 0 && matriz[inicioLinha-1][inicioColuna] == 1)
                inicioLinha--;        
        }
        else if (codigo[i] == 'B'){
            if(n > inicioLinha+1  && matriz[inicioLinha+1][inicioColuna] == 1)
                inicioLinha++;           
        }
        else if (codigo[i] == 'E'){
            if(inicioColuna-1 >= 0 && matriz[inicioLinha][inicioColuna-1] == 1 )
                inicioColuna--;
        }
        else{
            if(inicioColuna+1 < m && matriz[inicioLinha][inicioColuna+1] == 1 )
                inicioColuna++;
        }
    }
    printf("(%d,%d)\n", inicioLinha, inicioColuna);
}