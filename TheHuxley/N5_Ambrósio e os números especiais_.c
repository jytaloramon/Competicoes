#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define MAX 100100
#define LASTPOSI 200100
#define GETMIDDLE(a, b)((a + b) / 2)

char values[MAX * 2][20];
int segTree[MAX * 6];

int build(int posi, int startInterv, int endInterv);

int update(int index, int posi, int startInterv, int endInterv);

int query(int posi, int spaceS, int spaceE, int sInterv, int eInterv);

int isEspecial(int index);

int main(int argc, char const *argv[]){
   
    int i, op, l, r, qtValues, qtOp;

    scanf("%d %d", &qtValues, &qtOp);

    for (i = 0; i <  qtValues; i++)
        scanf("%s", &values[i]);

    build(0, 0, qtValues);

    for (i = 0; i <  qtOp; i++){
        scanf("%d %d", &op, &l);

        if (op == 1){
            scanf("%d", &r);
            printf("%d\n", query(0, l - 1, r - 1, 0, qtValues));
        } else {
            scanf("%s", &values[LASTPOSI]);
            update(l - 1, 0, 0, qtValues);
        }
    }

    return 0;
}

int build(int posi, int startInterv, int endInterv){
    if (startInterv == endInterv - 1)
        return segTree[posi] = isEspecial(startInterv);
    
    const int MIDDLE = GETMIDDLE(startInterv, endInterv);

    return segTree[posi] = build(posi * 2 + 1, startInterv, MIDDLE) + build(posi * 2 + 2, MIDDLE, endInterv);
}

int update(int index, int posi, int startInterv, int endInterv){
    if (startInterv == endInterv - 1)
        return segTree[posi] = isEspecial(LASTPOSI);
    
    const int MIDDLE = GETMIDDLE(startInterv, endInterv),
                LEFT = posi * 2 + 1, RIGHT = posi * 2 + 2;

    return segTree[posi] = index < MIDDLE ? update(index, LEFT, startInterv, MIDDLE) + segTree[RIGHT] : 
                                            update(index, RIGHT, MIDDLE, endInterv) + segTree[LEFT];
}

int query(int posi, int spaceS, int spaceE, int sInterv, int eInterv){
    if (spaceS >= eInterv || spaceE < sInterv)
        return 0;

    if (spaceS <= sInterv && eInterv <= spaceE + 1)
        return segTree[posi];

    const int MIDDLE = GETMIDDLE(sInterv, eInterv),
                LEFT = posi * 2 + 1, RIGHT = posi * 2 + 2;

    return query(LEFT, spaceS, spaceE, sInterv, MIDDLE) + query(RIGHT, spaceS, spaceE, MIDDLE, eInterv);
}

int isEspecial(int index){
    if (values[index][0] == '-')
        return 0;

    if (values[index][0] == values[index][strlen(values[index]) - 1])
        return 1;

    return 0;
}
