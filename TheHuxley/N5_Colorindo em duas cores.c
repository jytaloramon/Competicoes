#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
    int status, cor, count;
    struct ARESTA *arestas;
}NO;

typedef struct ARESTA{
    struct NO *vizinho;
}ARESTA;

int main(int argc, char const *argv[]){

    int t, q, i, y, x, fim;
    NO _no[q], *aux;

    while(1){
    
        scanf("%d", &t);
        if(t == 0) break;
        scanf("%d", &q);

        for(i = 0; i < t; i++){
            _no[i].status = 1;
            _no[i].cor = 0;
            _no[i].count = 0;
            _no[i].arestas = malloc(sizeof(ARESTA) * 201);
        }

        fim = 1;

        for(i = 0; i < q; i++){
            scanf("%d %d", &x, &y);
            _no[x].arestas[_no[x].count++].vizinho = &_no[y];
            _no[y].arestas[_no[y].count++].vizinho = &_no[x];  
        }

        for(i = 0; i < q; i++){
            aux = &_no[i];
            aux->status = 0;
            for(y = 0; y < aux->count; y++){
                if(aux->arestas[y].vizinho->status){
                    aux->arestas[y].vizinho->cor = !aux->cor;
                    aux->arestas[y].vizinho->status = 0;
                } else{
                    if(aux->cor == aux->arestas[y].vizinho->cor){
                        fim = 0;
                        q = 1000;
                        break;
                    }   
                }
            }
        }

        if(fim){
            printf("BICOLORABLE.\n");
        } else{
            printf("NOT BICOLORABLE.\n");
        }
    }

    return 0;
}