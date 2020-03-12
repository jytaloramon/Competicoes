#include "stdio.h"
#include "stdlib.h"

#define MAX 100010
#define CALMIDDLE(a, b)((a + b) / 2)

int listValues[MAX],
    listSegmTree[MAX * 3];

int build(int startInterv, int endInterv, int posi);

int update(int newValue, int indexUpdate, int startInterv, int endInterv, int posi);

int getSum(int findStartIndex, int findEndIndex, int startInterv, int endInterv, int posi);

int main(int argc, char const *argv[]){
    
    int i, j, a, b, vMin, nD, nOp;
    char op;

    scanf("%d", &nD);

    for (i = 0; i < nD; i++)
        scanf("%d", &listValues[i]);

    build(0, nD, 0);

    scanf("%d", &nOp);
    
    for (i = 0; i < nOp; i++){
        getchar();
        scanf("%c", &op);
        scanf("%d %d", &a, &b);

        switch (op){
        case 'Q':

            vMin = 24444444;
            for (j = a; j < b + 1; j++)
                if (listValues[j] < vMin)
                    vMin = listValues[j];

            printf("%d %d\n", getSum(a, b, 0, nD, 0), vMin);
            break;
        
        default:
            update(b, a, 0, nD, 0);
            listValues[a] = b;
        }

    }
    
    return 0;
}

int build(int startInterv, int endInterv, int posi){
    if (startInterv == endInterv - 1)
        return listSegmTree[posi] = listValues[startInterv];

    const int middle = CALMIDDLE(startInterv, endInterv),
        sumInterv = build(startInterv, middle, posi * 2 + 1) +
                    build(middle, endInterv, posi * 2 + 2);

    return listSegmTree[posi] = sumInterv; 
}

int update(int newValue, int indexUpdate, int startInterv, int endInterv, int posi){
    if (startInterv == endInterv - 1)
        return listSegmTree[posi] = newValue;

    const int middle = CALMIDDLE(startInterv, endInterv),
            sumInterv = indexUpdate < middle ? 
                            update(newValue, indexUpdate, startInterv, middle, posi * 2 + 1) + listSegmTree[posi * 2 + 2]:
                            update(newValue, indexUpdate, middle, endInterv, posi * 2 + 2) + listSegmTree[posi * 2 + 1];
                                                
    return listSegmTree[posi] = sumInterv;
}

int getSum(int findStartIndex, int findEndIndex, int startInterv, int endInterv, int posi){
    if (findStartIndex >= endInterv || findEndIndex < startInterv)
        return 0;

    if (findStartIndex <= startInterv && endInterv <= findEndIndex + 1)
        return listSegmTree[posi];

    const int middle = CALMIDDLE(startInterv, endInterv);

    return getSum(findStartIndex, findEndIndex, startInterv, middle, posi * 2 + 1) +
            getSum(findStartIndex, findEndIndex, middle, endInterv, posi * 2 + 2);
}
