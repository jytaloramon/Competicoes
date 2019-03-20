#include "stdio.h"
#include "stdlib.h"

typedef struct Pilha{
    int value;
    struct Pilha *next;
} Pilha;

Pilha *push(Pilha *currentTop, int value);

Pilha *pop(Pilha *currentTop);

void print(Pilha *currentTop);

int main(int argc, char const *argv[]){

    int end, value;
    char option[10];
    Pilha *top = NULL;

    do{
        scanf("%s", option);

        end = option[0] == 'F';
        if(end)
            continue;

        if(option[0] == 'E'){
            scanf("%d", &value);
            top = push(top, value);
            print(top);
        } else{
            top = pop(top);
            print(top);
        }    

    } while (!end);
    
}

Pilha *push(Pilha *currentTop, int value){
    Pilha *current = malloc(sizeof(Pilha));
    current->value = value;
    current->next = currentTop;

    return current;
}

Pilha *pop(Pilha *currentTop){
    return currentTop->next;
}

void print(Pilha *currentTop){
    if(currentTop == NULL)
        return;

    Pilha *p = currentTop;
    printf("%d", p->value);
    p = p->next;

    while(p != NULL){
        printf(" %d", p->value);
        p = p->next; 
    }
    
    printf("\n");
}