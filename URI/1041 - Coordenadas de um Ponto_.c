#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    float x, y;
    char *r;

    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
        printf("Origem\n");
    else if (x == 0)
        printf("Eixo Y\n");
    else if (y == 0)
        printf("Eixo X\n");
    else {
        if (x < 0 && y < 0)
            r = "Q3";
        else if (x < 0)
            r = "Q2";
        else if (y < 0)
            r = "Q4";
        else 
            r = "Q1";

        printf("%s\n", r);
    }

    return 0;
}
