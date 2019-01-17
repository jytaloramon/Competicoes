#include "stdio.h"
#include "stdlib.h"

int main() {

    int km, qtDia;
    scanf("%d %d", &qtDia, &km);

    km -= (100*qtDia);
    if(km <= 0){
        printf("%d.00\n", 90*qtDia);
    }else{
        printf("%d.00\n", 90*qtDia+(km*12));
    }

    return 0;
}