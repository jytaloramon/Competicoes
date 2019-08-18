#include "stdio.h"
#include "stdlib.h"

int binarySearch(int key, const int * const list, int start, int end);

int main(int argc, char const *argv[]){

    int nHouse, nOrder, i, *housers, *orders, actualHouse = 0, resultS = 0, sumTime = 0;

    scanf("%d %d", &nHouse, &nOrder);

    housers = malloc(sizeof(int) * nHouse);
    orders = malloc(sizeof(int) * nOrder);

    for (i = 0; i < nHouse; i++)
        scanf("%d", &housers[i]);
    
    for (i = 0; i < nOrder; i++)
        scanf("%d", &orders[i]);
    
    for (i = 0; i < nOrder; i++){
        resultS = binarySearch(orders[i], housers, 0, nHouse);
        sumTime += resultS > actualHouse ? (resultS - actualHouse) : (actualHouse - resultS);
        actualHouse = resultS;
    }
    
    printf("%d\n", sumTime);
    return 0;
}

int binarySearch(int key, const int * const list, int start, int end){
    const int half = (start + end) / 2;

    if (key == list[half])
        return half;

    if (key > list[half])
        return binarySearch(key, list, half, end);
    
    return binarySearch(key, list, start, half);
}