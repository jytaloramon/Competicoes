#include "stdio.h"
#include "stdlib.h"

typedef struct _item{
    int value;
    struct _item *next;
} Item;

typedef struct _list{
    struct _item *front, **end;
} List;

Item *create(int value);

void add_list(List *list, int value);

void remove_list(List *list);

void print_list(List *list);

int main(int argc, int *argv[]){

    char option[15];
    int loop = 1, value;
    List list;
    list.front = NULL;
    list.end = &list.front;

    do {
        scanf("%s", option);
        switch (option[0]){
        case 'I':
            print_list(&list);
            break;
        case 'E':
            scanf("%d", &value);
            add_list(&list, value);
            break;
        case 'D':
            remove_list(&list);
            break;
        default:
            loop = 0;
        }
    } while(loop);

    return 0;
}

Item *create(int value){
    Item *item = malloc(sizeof(Item));
    item->value = value;
    item->next = NULL;

    return item;
}

void add_list(List *list, int value){
    Item *item = create(value);

    if(!*list->end){
        *list->end = item;
        return;
    }
    
    (*list->end)->next = item;
    list->end = &(*list->end)->next;
}

void remove_list(List *list){
    if(!list->front) return;

    list->front = list->front->next;

    if(!list->front)
        list->end = &list->front;
}

void print_list(List *list){
    Item *item = list->front;
    
    if(!item) return;

    printf("%d", item->value);
    while (item->next){
        printf(" %d", item->next->value);
        item = item->next;
    }
    printf("\n");
}
