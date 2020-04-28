#include "stdio.h"
#include "stdlib.h"

int dist[10001];

int main(int argc, char const *argv[]){
    
    int v, day, month, year;

    scanf("%d", &v);

    year = v / 365;
    v = v % 365;
    month = v / 30;
    day = v % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);

    return 0;
}
