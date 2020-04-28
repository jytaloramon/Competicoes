#include "stdio.h"
#include "stdlib.h"

typedef struct node {
    int value;
    struct node *left, *right;
} Node;

typedef struct tree {
    struct node *root;
} Tree;

Node *create(int value);

void add(Node **node, int *value);

void inorder(Node *nodeActual);

void preorder(Node *nodeActual);

void postorder(Node *nodeActual);

int main(int argc, char const *argv[]){
   
    int i, j, v, qtInput, cases;
    Tree tree;

    scanf("%d", &cases);

    for (i = 0; i < cases; i++){
        scanf("%d", &qtInput);

        tree.root = NULL;

        for (j = 0; j < qtInput; j++){
            scanf("%d", &v);
            add(&tree.root, &v);
        }

        printf("Case %d:\n", i + 1);
        
        printf("Pre.:");
        preorder(tree.root);
        printf("\n");

        printf("In..:");
        inorder(tree.root);
        printf("\n");
        
        printf("Post:");
        postorder(tree.root);
        printf("\n");
        printf("\n");
    }

    return 0;
    
}

Node *create(int value){
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->left = node->right = NULL;

    return node; 
}

void add(Node **node, int *value){
    if (!*node){
        *node = create(*value);
        return;
    }

    
    *value < (*node)->value ? add(&(*node)->left, value) : add(&(*node)->right, value);
}

void inorder(Node *nodeActual){
    if(!nodeActual) return;
    
    inorder(nodeActual->left);
    printf(" %d", nodeActual->value);
    inorder(nodeActual->right);
}

void preorder(Node *nodeActual){
    if(!nodeActual) return;
    
    printf(" %d", nodeActual->value);
    preorder(nodeActual->left);
    preorder(nodeActual->right);
}

void postorder(Node *nodeActual){
    if(!nodeActual) return;
    
    postorder(nodeActual->left);
    postorder(nodeActual->right);
    printf(" %d", nodeActual->value);
}
