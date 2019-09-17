#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define MAX 2147000000

char grid[30][30];

int minComplex = MAX,
    directionLine[] = {-1, 1, 0, 0},
    directionCol[] = {0, 0, -1, 1};

int isWay(int *line, int *col);

int isRotation(int lastLine, int lastCol, int nextLine, int nextCol);

void mazeRun(int line, int col, int lastLine, int lastCol, int complex);

int main(int argc, char const *argv[]){
    
    int i, j,lengthGridLine, lengthGridCol;

    scanf("%d %d", &lengthGridLine, &lengthGridCol);

    for (i = 0; i < lengthGridLine + 2; i++)
        memset(grid[i], '#', lengthGridCol + 2);
    
    for (i = 1; i < lengthGridLine + 1; i++)
        for (j = 1; j < lengthGridCol + 1; j++)
            scanf(" %c", &grid[i][j]);
    grid[i - 1][j - 1] = 'e';    

    mazeRun(1, 1, 1, 1, 0);
    
    if(minComplex != MAX)
        printf("O caminho tem complexidade: %d\n", minComplex);
    else
        printf("Continuem cavando!\n");
    
    return 0;
}

int isWay(int *line, int *col){
    return grid[*line][*col] == '1' || grid[*line][*col] == 'e';
}

int isRotation(int lastLine, int lastCol, int nextLine, int nextCol){
    return (lastLine != nextLine && lastCol != nextCol) ? 1 : 0;
}

void mazeRun(int line, int col, int lastLine, int lastCol, int complex){
    if(grid[line][col] == 'e'){
        if (complex < minComplex)
            minComplex = complex;
        return;
    }
    
    int i;
    char bkpPosi = grid[line][col];
    grid[line][col] = '#';

    for(i = 0; i < 4; i++){
        int nextLine = line + directionLine[i],
            nextCol = col + directionCol[i];

        if(isWay(&nextLine, &nextCol))
            mazeRun(nextLine, nextCol, line, col, complex + isRotation(lastLine, lastCol, nextLine, nextCol));
        
    }

    grid[line][col] = bkpPosi;
}