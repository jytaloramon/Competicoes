#include "stdio.h"
#include "stdlib.h"

char map[110][110];
int endY, endX, 
	directionY[] = {0, 0, -1, 1},
	directionX[] = {-1, 1, 0 ,0};

void localizeHermione(int *line, int width, int *posStartH, int *posStartW);

void run(int yActual, int xActual);

int main(int argc, int *argv){
	
	int i, j, width, heigth, posStartH = -1, posStartW = -1;
	
	scanf("%d %d", &heigth, &width);
	getchar();
	
	for(i = 1; i <= heigth; i++){
		for(j = 1; j <= width; j++)
			scanf("%c", &map[i][j]);
		
		getchar();
		if(posStartH == -1)
			localizeHermione(&i, width, &posStartH, &posStartW);
	}
	
	
	run(posStartH, posStartW);
	
	printf("%d %d\n", endY, endX);
	
}

void localizeHermione(int *line, int width, int *posStartH, int *posStartW){
	int i;
	for(i = 1; i <= width; i++)
		if(map[*line][i] == 'o'){
			*posStartH = *line;
			*posStartW = i;
		}
}

void run(int yActual, int xActual){
	int i, yNext, xNext;
	map[yActual][xActual] = '#';
	for(i = 0; i < 4; i++){
		yNext = yActual + directionY[i];
		xNext = xActual + directionX[i];
		
		if(map[yNext][xNext] == 'H'){
			run(yNext, xNext);
			return;
		}
	}

	endY = yActual;
	endX = xActual;
}
