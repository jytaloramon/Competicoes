#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define MAX 105

typedef struct _cell{
    int value;
    struct _cell *next;
} Cell;

Cell *createCell(int valeu){
    Cell *cell = malloc(sizeof(Cell));
    cell->value = valeu;
    cell->next = NULL;

    return cell;
}

void setNull(Cell *arr[MAX], int max){
    for (int i = 0; i < max; i++)
        arr[i] = NULL;
}

int main(){

    int t, i, j, value, res, addr_base, num_input;
    Cell *arr[MAX], *cell_aux;

    scanf("%d", &t);

    for (i = 0; i < t; i++){
        scanf("%d %d", &addr_base, &num_input);

        setNull(arr, addr_base);

        for (j = 0; j < num_input; j++){
            scanf("%d", &value);
            res = value % addr_base;

            if(!arr[res])
                arr[res] = createCell(value);
            else {
                cell_aux = arr[res];
                while (cell_aux->next)
                    cell_aux = cell_aux->next;
        
                cell_aux->next = createCell(value);
            }
        }

        for (j = 0; j < addr_base; j++){
            printf("%d", j);
            
            cell_aux = arr[j];
            while (cell_aux){
                printf(" -> %d", cell_aux->value);
                cell_aux = cell_aux->next;
            }

            printf(" -> \\\n");
        }
        
        if (i < t - 1)
            printf("\n");
    }

    return 0;
}