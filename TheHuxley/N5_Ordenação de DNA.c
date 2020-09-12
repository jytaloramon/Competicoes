#include "stdio.h"
#include "stdlib.h"

typedef struct _dna {
    char seq[51];
    int inverse, order;
} Dna;

Dna dnas[105];
int idxs_order[105];

void count_seq(int idx, int len);

void reset_order(int len);

int compare(void const *a, void const *b);

int main(int argc, char const *argv[]){

    int i, t, case_t, len, count_max;
    char buffer[5];

    scanf("%d", &case_t);

    for(t = 0; t < case_t; t++){
        scanf("%d %d", &len, &count_max);
        
        for(i = 0; i < count_max; i++){
            scanf("%s", dnas[i].seq);
            dnas[i].order = i;
            count_seq(i, len);
        }

        reset_order(count_max);
        qsort(idxs_order, count_max, sizeof(int), compare);

        for (i = 0; i < count_max; i++)
            printf("%s\n", dnas[idxs_order[i]].seq);
            
        if(t < case_t - 1)
            printf("\n");
    }

    return 0;
}

void count_seq(int idx, int len){
    int i, j;
    dnas[idx].inverse = 0;

    for (i = 0; i < len; i++){
        for(j = i + 1; j < len; j++)
            dnas[idx].inverse += dnas[idx].seq[i] > dnas[idx].seq[j];
    } 
}

void reset_order(int len){
    for(int i = 0; i < len; i++) idxs_order[i] = i;
}

int compare(void const *a, void const *b){
    int v_a = *((int *) a), v_b = *((int *) b);

    if (dnas[v_a].inverse != dnas[v_b].inverse)
        return dnas[v_a].inverse - dnas[v_b].inverse;

    return dnas[v_a].order - dnas[v_b].order;
}
