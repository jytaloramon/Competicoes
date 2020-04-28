#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct element{
    char name[21];
    struct element *next;
} Element;

typedef struct list{
    struct element *fist, **last;
} List;

Element *create(char *name);

void add(List *list, char *name);

int find(List *list, char *name);

int main(int argc, char const *argv[]){
   
    int i, disc;
    char name[21];
    List list = { NULL, &list.fist };
    Element *el;

    scanf("%d", &disc);

    for (i = 0; i < disc; i++){
        scanf(" %[^\n]s", name);
        add(&list, name);
    }

    while (scanf(" %[^\n]s", name) != EOF){
        i = find(&list, name);

        if (i != -1){
            if (!i)
                printf("%s podera ser cursada esse periodo.\n", name);
            else { 
                printf("%s podera ser cursada depois de %d periodos, depois de ter passado por:", name, i);
                el = list.fist;

                while (el && i > 0){
                    printf(" %s", el->name);
                    if (i > 2)
                        printf(",");
                    else if (i > 1)
                        printf(" e");
                        
                    el = el->next;
                    i--;
                }

                printf(".\n");
            }
        } else 
            printf("%s nao pode ser cursada nessa cadeia de pre-requisitos.\n", name);
    }
    
    return 0;
}

Element *create(char *name){
    Element *el = malloc(sizeof(Element));
    strcpy(el->name, name);
    el->next = NULL;

    return el;
}

void add(List *list, char *name){
    *list->last = create(name);
    list->last = &(*list->last)->next;
}

int find(List *list, char *name){
    int period = 0;
    Element *el = list->fist;

    while (el){
        if (!strcmp(el->name, name))
            return period;

        el = el->next;
        period++;
    }   

    return -1;
}