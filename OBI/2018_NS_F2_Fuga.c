#include "stdio.h"
#include "stdlib.h"

char board[1000][1000];
int best = 0;
int directionY[] = {-1, 1, 0, 0};
int directionX[] = {0, 0, -1, 1};

void printBoard(int nLine, int nColumn);

void generateRoad(int yStart, int xStart, int yEnd, int xEnd, int nLine, int nColumn, int sum);

int main(int argc, char const *argv[]){
    
    int nLine, nColumn,
        lineStart, columnStart, 
        lineEnd, columnEnd,
        i, j;

    scanf("%d %d %d %d %d %d", &nLine, &nColumn, &lineStart, &columnStart, &lineEnd, &columnEnd);
    nLine += 2;
    nColumn += 2;
    
    /* Inicialização tabuleiro */
    for (i = 0; i < nLine; i++){
        for (j = 0; j < nColumn ; j++){
            if (i == 0 || i == nLine - 1 || j == 0 || j == nColumn - 1)
                board[i][j] = '#';
            else 
                board[i][j] = i % 2 == 0 && j % 2 == 0 ? '#' : '.';
        }
    }
        
    generateRoad(lineStart, columnStart, lineEnd, columnEnd, nLine - 1, nColumn - 1, 1);

    printf("%d\n", best);

    return 0;
}

void liveProcess(int stepBystep, int nLine, int nColumn){
    if(!stepBystep){
        char aux[5];
        scanf("%[^\n]s", aux);
        getchar();
    }

    printBoard(nLine, nColumn);
}

void printBoard(int nLine, int nColumn){
    int i, j;

    for (i = 0; i < nLine; i++){
        for (j = 0; j < nColumn; j++)
            printf("%c", board[i][j]);
        printf("\n");
    }
    printf("\n\n");
}

void generateRoad(int yStart, int xStart, int yEnd, int xEnd, int nLine, int nColumn, int sum){
    /* Ver processo em tempo real*/
    //liveProcess(0, nLine + 1, nColumn + 1);

    if (yStart == yEnd && xStart == xEnd){
        if (sum > best)
            best = sum;
        return;
    }

    char temp[4];
    int i, j;

    /* Backup do estado da vizinhança: em volta da posição atual */
    for (i = 0; i < 4; i++)
        temp[i] = board[yStart + directionY[i]][xStart + directionX[i]];
    
    /* Visitando os vizinho disponiveis */
    for (i = 0; i < 4; i++){
        if (board[yStart + directionY[i]][xStart + directionX[i]] == '.'){

            /* Alterando o estado da vizinhança para visitado*/
            for (j = 0; j < 4; j++)
                if(board[yStart + directionY[j]][xStart + directionX[j]] != '@')
                    board[yStart + directionY[j]][xStart + directionX[j]] = '#';
            
            board[yStart + directionY[i]][xStart + directionX[i]] = '@';
            generateRoad(yStart + directionY[i], xStart + directionX[i], yEnd, xEnd, nLine, nColumn, sum + 1);
            
            /* Restaurando backup */
            for (j = 0; j < 4; j++)
                board[yStart + directionY[j]][xStart + directionX[j]] = temp[j];
        } 
    }

}
