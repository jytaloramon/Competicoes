#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct node{
    char textOri[20], textDst[20];
    int lengthOri;
    struct node *left, *right;
} Node;

typedef struct dic{
    struct node *nodeRoot;
} Dic;

Node* create(char *strOri, char *strDst);

void add(Node **node, char *strOri, char *strDst);

Node* find(Node *node, char *str);

char* subString(char *str, Dic *dic);

int main(int argc, char const *argv[]){
    
    int i, inputRg, inputText; 
    char text[400], *str, *strOut, str1[200], str2[200];
    Dic dic;

    do {
        scanf("%d %d", &inputRg, &inputText);
        
        if (inputRg || inputText){
            dic.nodeRoot = NULL;

            for (i = 0; i < inputRg; i++){
                scanf(" %[^\n]s", text);

                strcpy(str1, strtok(text, " "));
                strtok(NULL, " ");
                strcpy(str2, strtok(NULL, " "));

                add(&dic.nodeRoot, str1, str2);
            }

            for (i = 0; i < inputText; i++){
                scanf(" %[^\n]s", text);
                
                str = subString(strtok(text, " "), &dic);
                printf("%s", str);

                str = strtok(NULL, " ");;
                while (str){
                    str = subString(str, &dic);
                    printf(" %s", str);
                    str = strtok(NULL, " ");
                }
                
                printf("\n");
            }
        }
        
    } while(inputRg && inputText);

    return 0;
}

Node* create(char *strOri, char *strDst){
    Node *node = malloc(sizeof(Node));
    node->lengthOri = strlen(strOri);
    node->left = node->right = NULL;
    strcpy(node->textOri, strOri);
    strcpy(node->textDst, strDst);
    
    return node;
}

void add(Node **node, char *strOri, char *strDst){
    if (!*node){
        *node = create(strOri, strDst);
        return;
    }

    const int num = strcmp((*node)->textOri, strOri);

    if (num < 0)
        add(&(*node)->right, strOri, strDst);
    else if (num > 0)
        add(&(*node)->left, strOri, strDst); 
}

Node* find(Node *node, char *str){
    if (!node)
        return NULL;    

    const int v = strncmp(str, node->textOri, node->lengthOri);

    if (!v)
        return node;
    
    return v < 0 ? find(node->left, str) : find(node->right, str);
}

char* subString(char *str, Dic *dic){
    int i = 0, j, t = 0;
    char *newStr = malloc(sizeof(char) * 40);
    Node *sub;

    while (str[i] != '\0'){
        sub = find(dic->nodeRoot, &str[i]);
        if (sub){
            j = 0;

            while (sub->textDst[j] != '\0')
                newStr[t++] = sub->textDst[j++];
            i += sub->lengthOri;
        } else { 
            newStr[t++] = str[i];
            i++;
        }
        
    }
    
    newStr[t] = '\0';
    
    return newStr;
}