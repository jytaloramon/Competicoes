#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char inputStr[23000];

typedef struct node{
    char name[21];
    struct node *left, *rigth;
} Node;

typedef struct tree{
    struct node *root;
} Tree;

Node* add(char *name, Node *node);

Node* create(char *name);

void run(Node *node, char *query);

int main(int argc, char const *argv[]){
    
    int i, j, inputMax;
    char *inputName;
    Tree tree = { NULL };

    scanf("%d", &inputMax);

    for (i = 0; i < inputMax; i++){
        getchar();
        scanf("%[^\n]s", inputStr);

        inputName = strtok(inputStr, " ");
        while (inputName){
            tree.root = add(inputName, tree.root);
            inputName = strtok(NULL, " ");
        }

        if (tree.root){
            run(tree.root->left, "%s ");
            printf("%s", tree.root->name);
            run(tree.root->rigth, " %s");

            printf("\n");
        }

        tree.root = NULL;
    }

    return 0;
    
}

Node* add(char *name, Node *node){
    if (node == NULL){
        return create(name);
    }
    
    int cal = strcmp(name, node->name);
    
    if(cal < 0)
        node->left = add(name, node->left);
    else if(cal > 0)
        node->rigth = add(name, node->rigth);

    return node;
}

Node* create(char *name){
    Node *node = malloc(sizeof(Node));
    strcpy(node->name, name);
    node->left = NULL;
    node->rigth = NULL;

    return node;
}

void run(Node *node, char *query){
    if (node == NULL)
        return;
    
    run(node->left, query);
    printf(query, node->name);
    run(node->rigth, query);
}