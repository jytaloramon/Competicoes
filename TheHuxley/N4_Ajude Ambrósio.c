#include "stdio.h"
#include "stdlib.h"

#define MAX 100100
#define GETMIDDLE(a, b)((a + b) / 2)

typedef struct node {
    int qtPair, qtOdd;
} Node;

int listV[MAX];
Node nodes[MAX * 3];

void build(int posi, int startInterv, int endInterv);

void update(int newV, int index, int posi, int startInterv, int endInterv);

int query(int posi, int spaceStart, int spaceEnd, int startInterv, int endInterv, int (*task)(int));

int getPair(int posi);

int getOdd(int posi);

int main(int argc, char const *argv[]){
   
    int i, x, l, r, qtValues, qtOp;

    scanf("%d", &qtValues);

    for (i = 0; i < qtValues; i++)
        scanf("%d", &listV[i]);

    build(0, 0, qtValues);    

    scanf("%d", &qtOp);

    for (i = 0; i < qtOp; i++){
        scanf("%d %d %d", &x, &l, &r);

        switch (x){
        case 0:
            update(r, l - 1, 0, 0, qtValues);
            break;
        case 1:
            printf("%d\n", query(0, l - 1, r - 1, 0, qtValues, &getPair));
            break;
        default:
            printf("%d\n", query(0, l - 1, r - 1, 0, qtValues, &getOdd));
            break;
        }
    }

    return 0;
}

void build(int posi, int startInterv, int endInterv){
    if (startInterv == endInterv - 1){
        nodes[posi].qtPair= !(nodes[posi].qtOdd = listV[startInterv] % 2);
        return;
    }
        
    const int MIDDLE = GETMIDDLE(startInterv, endInterv), 
                POSILEFT  =  posi * 2 + 1, 
                POSIRIGHT =  posi * 2 + 2;
                
    build(POSILEFT, startInterv, MIDDLE),
    build(POSIRIGHT, MIDDLE, endInterv);

    nodes[posi].qtPair = nodes[POSILEFT].qtPair + nodes[POSIRIGHT].qtPair;
    nodes[posi].qtOdd  = nodes[POSILEFT].qtOdd + nodes[POSIRIGHT].qtOdd;
}

void update(int newV, int index, int posi, int startInterv, int endInterv){
    if (startInterv == endInterv - 1){
        nodes[posi].qtPair = !(nodes[posi].qtOdd = newV % 2);
        return;
    }
        
    const int MIDDLE = GETMIDDLE(startInterv, endInterv),
                POSILEFT  = posi * 2 + 1,
                POSIRIGHT = posi * 2 + 2;

    index < MIDDLE ? update(newV, index, POSILEFT, startInterv, MIDDLE) : update(newV, index, POSIRIGHT, MIDDLE, endInterv);
   
    nodes[posi].qtPair = nodes[POSILEFT].qtPair + nodes[POSIRIGHT].qtPair;
    nodes[posi].qtOdd  = nodes[POSILEFT].qtOdd + nodes[POSIRIGHT].qtOdd;
}

int query(int posi, int spaceStart, int spaceEnd, int startInterv, int endInterv, int (*task)(int)){
    if (spaceStart >= endInterv || spaceEnd < startInterv)
        return 0;

    if (spaceStart <= startInterv && endInterv <= spaceEnd + 1)
        return task(posi);

    const int MIDDLE = GETMIDDLE(startInterv, endInterv);

    return query(posi * 2 + 1, spaceStart, spaceEnd, startInterv, MIDDLE, task) + 
            query(posi * 2 + 2, spaceStart, spaceEnd, MIDDLE, endInterv, task);
}

int getPair(int posi){
    return nodes[posi].qtPair;
}

int getOdd(int posi){
    return nodes[posi].qtOdd;
}
