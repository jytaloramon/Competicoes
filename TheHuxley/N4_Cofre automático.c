#include <stdio.h>
#include <stdlib.h>

typedef struct Nume{
    int valor;
    struct Nume *proxi, *anterior;
}Nume;

int main(int argc, char const *argv[]){

    int i, q, aux, t;
    char op;
    Nume barramento, *atual; 

    barramento.proxi = NULL;
    atual = &barramento;

    scanf("%d", &q);

    for(i = 0; i < q; i++){
        
        scanf("%d", &aux);

        atual->proxi = malloc(sizeof(Nume));

        atual->proxi->anterior = atual;
        atual = atual->proxi;
        atual->valor = aux;
        atual->proxi = NULL;
    }

    atual->proxi = barramento.proxi;

    barramento.proxi->anterior = atual;
    atual = barramento.proxi;

    
    while(1){

        getchar();
        scanf("%c %d", &op, &t);

        if(op == 'D'){
            for(i = 0; i < t; i++){
                atual = atual->anterior;
            }

        } else if(op == 'E'){
            for(i = 0; i < t; i++){
                atual = atual->proxi;
            }  

        } else{
            break;
        }

        for(i = 0; i < q ; i++){ 
            printf("%d ", atual->valor); 
            atual = atual->proxi;
        }
        printf("\n");
    }

    return 0;
}