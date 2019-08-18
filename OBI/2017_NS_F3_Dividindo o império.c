#include "stdio.h"
#include "stdlib.h"

int nVertice = 0, menorDif = 10000000;

typedef struct _aresta{
    struct _vertice *vetDest;
} Aresta;

typedef struct _vertice{
    int status, countArestas, maxArestas, id;
    struct _aresta *arestas[100];
} Vertice;

void addAresta(Vertice *vetIni, Vertice *vetDest);

int aparaAresta(Vertice *vet){
    int i, sum = 1, dif;
    vet->status = 1;

    for (i = 0; i < vet->countArestas; i++){
        if (!vet->arestas[i]->vetDest->status)
            sum += aparaAresta(vet->arestas[i]->vetDest);
    }
    
    dif = sum - (nVertice - sum);

    if (dif >= 0 && dif < menorDif)
        menorDif = dif;

    return sum;
}

int main(int argc, char const *argv[]){
    
    Vertice *vertices;
    int i, n, m;

    scanf("%d", &nVertice);

    vertices = malloc(sizeof(vertices) * nVertice);

    for (i = 0; i < nVertice; i++){
        vertices[i].id = i;
        vertices[i].status = 0;
        vertices[i].countArestas = 0;
        vertices[i].maxArestas = 100;
    }
    
    for (i = 0; i < nVertice - 1; i++){
        scanf("%d %d", &n, &m);

        addAresta(&vertices[n - 1], &vertices[m - 1]);
        addAresta(&vertices[m - 1], &vertices[n - 1]);
    }
    
    aparaAresta(&vertices[0]);

    printf("%d\n", menorDif);
    return 0;
}

void addAresta(Vertice *vetIni, Vertice *vetDest){
    Aresta *aresta = malloc(sizeof(Aresta));
    aresta->vetDest = vetDest;

    vetIni->arestas[vetIni->countArestas++] = aresta;
}