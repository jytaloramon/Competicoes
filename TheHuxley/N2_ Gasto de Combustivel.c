#include <stdio.h>
#include <stdlib.h>

int main(){

    int dist, tempo;
    scanf("%d%d", &dist, &tempo);
    printf("%.2f\n", (float)(dist*tempo)/12);

    return 0;
}