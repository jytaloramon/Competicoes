#include "stdio.h"
#include "stdlib.h"

typedef struct _node{
    char name[15];
    int pt;
    struct _node *left, *right;
} Node;


typedef struct _tree {
    struct _node *root;
} Tree;

Node *create();

void insert(Node **actual, Node *new);

void innorder_invers(Node *actual);

int main(int argc, char const *argv[]){
    
    int loop = 1;
    char action[10];
    Tree tree = { NULL };
    Node *aux_node;

    do {
       scanf("%s", action);

       if (action[0] == 's') loop = 0;
       else if (action[1] == 'n'){
           aux_node = create();
           scanf("%s %d", aux_node->name, &aux_node->pt);
           printf("%s foi inserido no sistema! Sua nota e de %d.\n", aux_node->name, aux_node->pt);
           insert(&tree.root, aux_node);
       } else{
          innorder_invers(tree.root);
       } 
    } while (loop);

    return 0;
}

Node *create(){
    return (Node *) malloc(sizeof(Node));
}

void insert(Node **actual, Node *new){
    if(!*actual){
        *actual = new;
        return;
    }

    if((*actual)->pt >= new->pt){
        insert(&(*actual)->left, new);
        return;
    }

    insert(&(*actual)->right, new);
}

void innorder_invers(Node *actual){
    if(!actual) return;

    innorder_invers(actual->right);
    printf("%s %d\n", actual->name,  actual->pt);
    innorder_invers(actual->left);
}