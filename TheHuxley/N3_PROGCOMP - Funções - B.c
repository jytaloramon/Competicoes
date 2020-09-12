#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    int v;

    scanf("%d", &v);

    printf("%s\n", v < 0 ? "menor" : "nao menor");

    return 0;
}
