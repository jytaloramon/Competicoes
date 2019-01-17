#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int A,B,C,D,diferenca;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    diferenca = (A*B)-(C*D);
    printf("DIFERENCA = %d\n",diferenca);
    
    return (EXIT_SUCCESS);
}

