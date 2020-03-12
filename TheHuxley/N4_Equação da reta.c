#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
   
    int x1, y1, x2, y2, a, b, c, q;
    
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if (x1 == x2)
        printf("(1.00x) + (0.00y) + (-%d.00) = 0\n", x1);
    else{ 
        a = y1 - y2;
        b = x2 - x1;
        c = -(x2 * y1) + (x1 * y2);
        printf("(%.2fx) + (%.2fy) + (%.2f) = 0\n", (float) a / b, (float) b / b, (float) c / b);
    }
    
    return 0;
}
