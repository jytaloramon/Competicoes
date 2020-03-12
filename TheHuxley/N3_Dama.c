#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    int x1, y1, x2, y2, status = 1, r;

    while (status){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        status = x1;
        
        if (status){
            if (x1 == x2 && y1 == y2)
                r = 0;
            else if (abs(x1 - x2) == abs(y1 - y2) || x1 == x2 && y1 != y2 || x1 != x2 && y1 == y2)
                r = 1;
            else 
                r = 2;
            
            printf("%d\n", r);
        }
    }
    
    return 0;
}
