#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int L,C,H,l,c,h;
    scanf("%d%d%d%d%d%d",&L,&C,&H,&l,&c,&h);
    if(L>=l &&C>=c &&H>=h)
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }

    return (EXIT_SUCCESS);
}

