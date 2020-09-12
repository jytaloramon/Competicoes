#include "stdio.h"
#include "stdlib.h"

typedef struct stack{
    int end, values[20];
} Stack;

void push(Stack *stack, int v);

int pop(Stack *stack);

void show_set(Stack *stack, int len);

int main(int argc, int *argv[]){

    int len;
    Stack stack = { 0 };
    ;

    scanf("%d", &len);

    for (int i = 0; i <= len; i++)
        push(&stack, i);

    show_set(&stack, len);
    printf("{ }\n");
    
    return 0;
}

void push(Stack *stack, int v){
    stack->values[stack->end++] = v;
}

int pop(Stack *stack){
    if(stack->end == 0) 
        return -1;
    int v = stack->values[--stack->end];

    return v;
}

void show_set(Stack *stack, int len){
    if(stack->end == 1) return;

    printf("{ %d", stack->values[1]);
    for(int i = 2; i < stack->end; i++) 
        printf(" %d", stack->values[i]);
    printf(" }\n");

    int v = pop(stack);
    while (v != len)
        push(stack, ++v);
    
    show_set(stack, len);
}
