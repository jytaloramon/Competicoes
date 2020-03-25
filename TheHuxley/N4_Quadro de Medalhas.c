#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct country{
    char name[30];
    int medals[3];
    struct country *left, *right;
    
} Country;

int count = 0;
Country countrys[500];

Country *create(char *name, char *medal);

void add(Country **country, char *name, char *medal);

int compare(const void *a, const void *b); 

int main(int argc, char const *argv[]){
    
    int i, status = 1;
    char inputText[100], *str1, *str2;
    Country *root = NULL, *orderMedal = NULL;

    while (status){
        scanf(" %[^\n]s", inputText);
        status = !(inputText[0] == '*');
        
        if(status){
            str1 = strtok(inputText, ",");
            str2 = strtok(NULL, ",");
            add(&root, str1, str2);
        }
    }

    qsort(countrys, count, sizeof(Country), &compare);

    for (i = 0; i < count; i++)
        printf("%d)%s ouro:%d prata:%d bronze:%d\n", i + 1, countrys[i].name, countrys[i].medals[0], countrys[i].medals[1], countrys[i].medals[2]);

    return 0;
}

Country *create(char *name, char *medal){
    strcpy(countrys[count].name, name);
    countrys[count].medals[0] = countrys[count].medals[1] = countrys[count].medals[2] = 0;
    countrys[count].left = countrys[count].right = NULL;

    if (medal[0] == 'o')
        countrys[count].medals[0] = 1;
    else if (medal[0] == 'p')
        countrys[count].medals[1] = 1;
    else 
        countrys[count].medals[2] = 1;
        
    return &countrys[count++];
}

void add(Country **country, char *name, char *medal){
    if (!(*country)){
        *country = create(name, medal);
        return;
    }

    int r = strcmp((*country)->name, name);

    if (!r){
        if (medal[0] == 'o')
            (*country)->medals[0]++;
        else if (medal[0] == 'p')
            (*country)->medals[1]++;
        else 
            (*country)->medals[2]++;
        return;
    }

    r < 0 ? add(&(*country)->right, name, medal) :  add(&(*country)->right, name, medal);
}

int compare(const void *a, const void *b){
    Country *c1 = (Country *) a, *c2 = (Country *) b;

    if(c1->medals[0] != c2->medals[0])
        return c2->medals[0] - c1->medals[0];
    if (c1->medals[1] != c2->medals[1])
        return c2->medals[1] - c1->medals[1];
    
    return c2->medals[2] - c1->medals[2];
}