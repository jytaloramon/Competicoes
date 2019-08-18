#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
	
	int v1, v2;
    float div;

    scanf("%d %d", &v1, &v2);

    if(v1 % v2 == 0)
        printf("%d\n", v1 / v2);
    else {
        div = (float) v1 / v2;
        v1 = div;

        (int)((div - v1) * 100) % 10 == 0 ? printf("%.1f\n", div) : printf("%.2f\n", div);
    }
    
	return 0;
}