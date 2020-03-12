#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
   
    int l, c;

    scanf("%d %d", &l, &c);

    printf("%d\n%d\n", l * c + (l - 1) * (c - 1), 2 * (l + c - 2));

    return 0;
}
