#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct {
    char nome[10];
    int gComida;
} Pessoa;

int main(int argc, char const *argv[]){

    int i, numPess;
    Pessoa *_pessoa;

    scanf("%d", &numPess);

    _pessoa = malloc(sizeof(Pessoa) * numPess);

    for(i = 0; i < numPess; i++)
        scanf("%s %d", _pessoa[i].nome, &_pessoa[i].gComida);
    
    for(i = numPess - 1; i >= 0; i--){
        printf("%s foi servido(a).\n", _pessoa[i].nome);
        _pessoa[i].gComida -= 400; 

        while(_pessoa[i].gComida > 0){
            printf("Fica tranquilo(a), %s pode se servir novamente!\n", _pessoa[i].nome);
            printf("%s foi servido(a).\n", _pessoa[i].nome);
            _pessoa[i].gComida -= 400; 
        }  
    }
}