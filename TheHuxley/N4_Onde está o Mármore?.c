#include "stdio.h"
#include "stdlib.h"

#define MIDDLE(a, b)((a + b) / 2)

int values[10010];

int compare(const void *a, const void *b);

int bsearchValues(int key, int s, int e);

int main(int argc, char const *argv[]){

    int i, j = 1,status = 1, n, m, t, v;
    
    while (status){
        scanf("%d %d", &n, &m);
        
        status = !(n == 0 && m == 0);

        if (status){
            for (i = 0; i < n; i++)
                scanf("%d", &values[i]);

            qsort(values, n, sizeof(int), &compare);
            printf("CASE# %d:\n", j);

            for (i = 0; i < m; i++){
                scanf("%d", &v);

                t = bsearchValues(v, 0, n);

                if(t != -1){
                    while (t >= 0 && values[t] == v) t--;
                    
                    printf("%d found at %d\n", v, t + 2);
                } else
                    printf("%d not found\n", v);
            }
        }

        j++;
    }

    return 0;
}

int compare(const void *a, const void *b){
    return *((int *) a) - *((int *) b);
}

int bsearchValues(int key, int s, int e){
    int m = MIDDLE(s, e);

    if (values[m] == key)
        return m;
    
    if (s == e - 1)
        return -1;
    
    return key < values[m] ? bsearchValues(key, s, m) : bsearchValues(key, m, e);
}
