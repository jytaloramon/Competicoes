#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PRODUTO{
    char nome[26];
    float preco;
}PRODUTO;

// Protipo de Função
typedef void (*ordena)(PRODUTO *prod, int inicio, int meio, int fim);

void dividir(PRODUTO *prod, int inicio, int fim, ordena orden);

void mergePreco(PRODUTO *prod, int inicio, int meio, int fim);

void mergeNome(PRODUTO *prod, int inicio, int meio, int fim);

// Função main
int main(int *argc, char *argv){

    int i, qt;
    float total, soma = 0;
    PRODUTO *_pdt;

    scanf("%f %d", &total, &qt);

    _pdt = malloc(sizeof(PRODUTO) * qt);

    for(i = 0; i < qt; i++){
        getchar();
        scanf("%s %f", &_pdt[i].nome, &_pdt[i].preco);
    }

    dividir(_pdt, 0, qt, mergePreco);

    for(i = 0; i < qt; i++){
        if(soma + _pdt[i].preco <= total) soma += _pdt[i].preco;
        else break;
    }

    dividir(_pdt, 0, i, mergeNome);

    for(qt = 0; qt < i; qt++){
        printf("%s %.2f\n", _pdt[qt].nome, _pdt[qt].preco);
    }

    printf("%.2f\n", total - soma);
}

// IMplemetação de funções
void dividir(PRODUTO *prod, int inicio, int fim, ordena orden){
    if (inicio >= fim - 1) return;
    int meio = (inicio + fim) / 2;

    dividir(prod, inicio, meio, orden);
    dividir(prod, meio, fim, orden);
    orden(prod, inicio, meio, fim);
}

void mergePreco(PRODUTO *prod, int inicio, int meio, int fim){
        
    int i = inicio, j = meio, q = 0;
    PRODUTO *aux = malloc(sizeof(PRODUTO) * (fim - inicio));

    while(i < meio && j < fim){
        if(prod[i].preco <= prod[j].preco) aux[q++] = prod[i++]; 
        else aux[q++] = prod[j++];
    }

    while(i < meio) aux[q++] = prod[i++]; 
        
    while(j < fim) aux[q++] = prod[j++];
        
    q = 0;
    for(i = inicio; i < fim; i++){
        prod[i] = aux[q++];
    }

}

void mergeNome(PRODUTO *prod, int inicio, int meio, int fim){
        
    int i = inicio, j = meio, q = 0;
    PRODUTO *aux = malloc(sizeof(PRODUTO) * (fim - inicio));

    while(i < meio && j < fim){
        if(strcmp(prod[i].nome, prod[j].nome) <= 0) aux[q++] = prod[i++]; 
        else aux[q++] = prod[j++];
    }

    while(i < meio) aux[q++] = prod[i++]; 
        
    while(j < fim) aux[q++] = prod[j++];
        
    q = 0;
    for(i = inicio; i < fim; i++){
        prod[i] = aux[q++];
    }
}