#include "stdio.h"
#include "stdlib.h"

char board[105][105];

void verify(int *sum, int *best){
    if (*sum > *best)
        *best = *sum;
    
    *sum = 0;
}

int analyse(char *key){
    if (*key == 'o')
        return 1;
    else if (*key == 'A')
        return 0;

    return -1; 
}

int main(int argc, char const *argv[]){
    
    int i, j, res, lenghtBoard, sum = 0, best = 0;

    scanf("%d", &lenghtBoard);

    for (i = 0; i < lenghtBoard; i++)
        scanf("%s", board[i]);

    for (i = 0; i < lenghtBoard; i++){
        if (i % 2 == 0){
            for (j = 0; j < lenghtBoard; j++){
                res = analyse(&board[i][j]);

                if (res == 1)
                    sum++;
                else if (res == 0)
                    verify(&sum, &best);
                
            }
        } else {
            for (j = lenghtBoard - 1; j >= 0; j--){
                res = analyse(&board[i][j]);
                
                if (res == 1)
                    sum++;
                else if (res == 0)
                    verify(&sum, &best);
            }
        }
    }
    
    verify(&sum, &best);

    printf("%d\n", best);

    return 0;
}

