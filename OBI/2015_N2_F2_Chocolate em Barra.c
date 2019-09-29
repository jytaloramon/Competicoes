#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){

    int dimensaoBarra, meioBarra, coodenFig[2][2];

    scanf("%d", &dimensaoBarra);
    scanf("%d %d %d %d", &coodenFig[0][0], &coodenFig[0][1], &coodenFig[1][0], &coodenFig[1][1]);
    
    meioBarra = dimensaoBarra / 2;

    if((coodenFig[0][0] <= meioBarra && coodenFig[1][0] > meioBarra) ||  (coodenFig[0][0] > meioBarra && coodenFig[1][0] <= meioBarra) ||
       (coodenFig[0][1] <= meioBarra && coodenFig[1][1] > meioBarra) ||  (coodenFig[0][1] > meioBarra && coodenFig[1][1] <= meioBarra))
        printf("S\n");
    else
        printf("N\n");
    
    return 0;
}