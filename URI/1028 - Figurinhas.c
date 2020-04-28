#include "stdio.h"
#include "stdlib.h"

int mdc(int v1, int v2){
    int r = v1 % v2;

    if (r == 0)
        return v2;
    if (r == 1)
        return 1;

    mdc(v2, r);
}

int main(int argc, char const *argv[]){
    
    int i, qt, v1, v2, p;

    scanf("%d", &qt);

    for (i = 0; i < qt; i++){
        scanf("%d %d", &v1, &v2);
        
        if (v1 >= v2)
            p = mdc(v1, v2);
        else 
            p = mdc(v2, v1);

        printf("%d\n", p);
    }


    return 0;
}
