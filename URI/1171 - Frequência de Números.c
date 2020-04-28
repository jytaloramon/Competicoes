#include "stdio.h"
#include "stdlib.h"

int v[2000];

int main(int argc, char const *argv[]){
    
    int i, n, p, max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &p);
        if (p > max)
            max = p;

        v[p - 1]++;
    }
        
    for (i = 0; i < 2000, i < max; i++)
        if (v[i])
            printf("%d aparece %d vez(es)\n", i + 1, v[i]);

    return 0;
}
