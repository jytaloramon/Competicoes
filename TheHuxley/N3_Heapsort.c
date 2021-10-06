#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define PARENT(v)(((v - 1) / 2))
#define LEFT(v)((v * 2 + 1))
#define RIGTH(v)((v * 2 + 2))
#define ICOMPARATOR int(*comparator)(void *const, void *const)
#define MAX 1000

size_t heapify_down(void *elmnt, size_t posi, void *arr, size_t length, size_t size_m, ICOMPARATOR);

int build_heap(void *arr, size_t length, size_t size_m, ICOMPARATOR);

void *remove_heap(void *arr,  size_t length, size_t size_m, ICOMPARATOR);

int comp(void *const a, void *const b);

int array[MAX];
char txt[MAX * 50];

int main(int argc, char const *argv[]){
    
    scanf("%[^\n]s", txt);

    int count = 0;
    char *txt_aux;

    txt_aux = strtok(txt, " ");
    while (txt_aux){
        array[count++] = atoi(txt_aux);
        txt_aux = strtok(NULL, " ");
    }
    
    printf("Estado inicial: %d", array[0]);
    for (size_t i = 1; i < count; i++)
        printf(" | %d", array[i]);
    printf("\n");
    
    build_heap(array, count, sizeof(int), comp);

    int *v;

    for (size_t i = count; i > 0; i--){
        printf("Estado Atual da Heap: %d", array[0]);
        for (size_t j = 1; j < i; j++)
            printf(" | %d", array[j]);
        printf("\n");

        v = (int *) remove_heap(array, i, sizeof(int), comp);

        if (i != 1)
            printf("Maior elemento neste passo: %d\n", *v);
        memcpy(&array[i - 1], v, sizeof(int));
    }

    printf("Resultado Final: %d", array[0]);
    for (size_t i = 1; i < count; i++)
        printf(" | %d", array[i]);
    printf("\n");

    return 0;
}

size_t heapify_down(void *elmnt, size_t posi, void *arr, size_t length, size_t size_m, ICOMPARATOR){
    size_t i = posi,
        child_rigth,
        child_obj;

    while (i < length){
        child_obj = LEFT(i),
        child_rigth = RIGTH(i);

        if (child_obj >= length)
            return i;
        
        if (child_rigth < length 
            && !(comparator(arr + child_obj * size_m, arr + child_rigth * size_m) > 0))
            child_obj = child_rigth;

        if (comparator(elmnt, arr + child_obj * size_m) > 0)
            return PARENT(child_obj);
        
        memcpy(arr + i * size_m, arr + child_obj * size_m, size_m);
        i = child_obj;
    }
    
    return PARENT(i);
}

int build_heap(void *arr, size_t length, size_t size_m, ICOMPARATOR){
    if (length < 1 || size_m < 1)
        return 0;

    char *obj_aux = malloc(size_m);

    if (!obj_aux)
        return 0;

    for (int i = length - 1, idx_swap; i >= 0; i--){
        memcpy(obj_aux, arr + i * size_m, size_m);
        //idx_swap = heapify_up(obj_aux, i, arr, length, size_m, comparator);
        idx_swap = heapify_down(obj_aux, i, arr, length, size_m, comparator);

        if (idx_swap != i)
            memcpy(arr + idx_swap * size_m, obj_aux, size_m);
    }

    return 1;
}

void *remove_heap(void *arr,  size_t length, size_t size_m, ICOMPARATOR){
    if (length < 1 || size_m < 1)
        return 0;

    char *obj_aux = malloc(size_m);

    if (!obj_aux)
        return 0;

    memcpy(obj_aux, arr, size_m);
    size_t n_length = length - 1,
        idx_add = heapify_down(arr + n_length * size_m, 0, arr, n_length, size_m, comparator);

    memcpy(arr + idx_add * size_m, arr + n_length * size_m, size_m);
    memset(arr + n_length * size_m, 0, size_m);

    return obj_aux;
}

int comp(void *const a, void *const b){
    return *((int *) a) - *((int *) b);
}