#include "stdio.h"
#include "stdlib.h"

typedef struct node{
    int value, count;
    struct node *left, *right;
} Node;

Node *nodeMax;

Node* create(int value);

void add(Node **node, int value);

int main(int argc, char const *argv[]){
  
    int v, i = 0;
    Node root = {0, 0, NULL, NULL};
    nodeMax = create(0);
    nodeMax->count = 0;

    while (scanf("%d", &v) != EOF){
        add(&root.left, v);
        i++;
    }
    
    printf("Moda = %d\n", i == 1 ? v : nodeMax->value);

    return 0;
}

Node* create(int value){
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->count = 1;
    node->left = node->right = NULL;

    return node;
}

void add(Node **node, int value){
    if (!(*node)){
        *node = create(value);
        return;
    }

    if ((*node)->value == value){
        (*node)->count++;

        if (nodeMax->count < (*node)->count)
            nodeMax = *node;
        return;
    }

    value < (*node)->value ? add(&(*node)->left, value) : add(&(*node)->right, value);
}