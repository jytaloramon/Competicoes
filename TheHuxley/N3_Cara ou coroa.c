#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int dif = 0;
int count = 0;

void generateComb(char const *chr, char const * const values, int countC, int countK, int indexActual, int indexMax);

int main(int argc, char const *argv[]){
    
    int nCombMax, nCoins;
    char values[] = {'C', 'K'};

    scanf("%d %d", &nCoins, &dif);
    
    nCombMax = pow(nCoins, 2);

    generateComb(&values[0], values, 1, 0, 0, nCoins);
    generateComb(&values[1], values, 0, 1, 0, nCoins);
    
    printf("%d\n", count);
    return 0;
}

void generateComb(char const *chr, char const * const values, int countC, int countK, int indexActual, int indexMax){
    if (indexActual == indexMax - 1){
        if (abs(countC - countK) == dif )
            count++;
        return;
    }

    generateComb(&values[0], values, countC + 1, countK, indexActual + 1, indexMax);
    generateComb(&values[1], values, countC, countK + 1, indexActual + 1, indexMax);  
}