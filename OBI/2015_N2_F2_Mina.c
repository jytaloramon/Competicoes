#include "stdio.h"
#include "stdlib.h"

char mina[110][110];
int countBarreiraMax = 244444445,
    direcaoLinha[] = {0, 0, -1, 1},
    direcaoCol[]   = {-1, 1, 0 , 0};

void run(int linhaActua, int colActual, int countBarreira);

int main(int argc, char const *argv[]){

    int i, j, tamanhoMax;

    scanf("%d", &tamanhoMax);

    for (i = 1; i <= tamanhoMax; i++)
        for (j = 1; j <= tamanhoMax; j++)
            scanf(" %c", &mina[i][j]);

    mina[tamanhoMax][tamanhoMax] = '@';

    run(1, 1, 0);

    printf("%d\n", countBarreiraMax);

    return 0;

}

void run(int linhaActua, int colActual, int countBarreira){
    if(countBarreira > countBarreiraMax)
        return;

    if(mina[linhaActua][colActual] == '@'){
        if(countBarreira < countBarreiraMax)
            countBarreiraMax = countBarreira;
        return;
    }

    char bkpPosi = mina[linhaActua][colActual];
    mina[linhaActua][colActual] = '#';
    int i, proxLinha, proxCol, v;

    for(i = 0; i < 4; i++){
        proxLinha = linhaActua + direcaoLinha[i];
        proxCol   = colActual + direcaoCol[i];

        if(mina[proxLinha][proxCol] == '0' || mina[proxLinha][proxCol] == '1' || mina[proxLinha][proxCol] == '@'){
            v = mina[proxLinha][proxCol] != '@' ? (int) mina[proxLinha][proxCol] - 48 : 0;
            run(proxLinha, proxCol, countBarreira + v);
        }
    }

    mina[linhaActua][colActual] = bkpPosi;
}