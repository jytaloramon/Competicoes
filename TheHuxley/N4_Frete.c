#include "stdio.h"
#include "stdlib.h"

int N;

typedef struct CITY{
    int menorValor, status, cont;
    struct ROTA **_rotas;
}CITY;

typedef struct ROTA{
    int peso;
    struct CITY *_destino;
}ROTA;

void create_rota(CITY *origem, CITY *destino, int *value){
    ROTA *rota_1, *rota_2;
    
    rota_1 = malloc(sizeof(ROTA));
    rota_2 = malloc(sizeof(ROTA));
    
    rota_1->peso = *value;
    rota_1->_destino = destino;

    rota_2->peso = *value;
    rota_2->_destino = origem;

    origem->_rotas[origem->cont++] = rota_1;
    destino->_rotas[destino->cont++] = rota_2;
}

CITY *city_menor_value(CITY *array_city){
    int t = 0, menor = 200000, id;

    for(t = 0; t < N - 1; t++){
        if(array_city[t].status == 1 && array_city[t].menorValor < menor){
            menor = array_city[t].menorValor;
            id = t;  
        }
    }
    return &array_city[id];
}

int main(int *args, int *argv){

    int M, A, B, C, i, j, p;

    scanf("%d %d", &N, &M);

    CITY cidades[N], *aux_cid = &cidades[0];

    for(i = 0; i < N; i++){
        cidades[i].menorValor = 100000;
        cidades[i].status = 1;
        cidades[i]._rotas = malloc(sizeof(ROTA) * 150);
        cidades[i].cont = 0;
    }
    cidades[0].menorValor = 0;

    for(i = 0; i < M; i++){
        scanf("%d %d %d", &A, &B, &C);
        create_rota(&cidades[A - 1], &cidades[B - 1], &C);
    }

    for(i = 0; i < N - 1; i++){
        for(j = 0; j < aux_cid->cont; j++){
            p = aux_cid->menorValor + aux_cid->_rotas[j]->peso;
            if(p < aux_cid->_rotas[j]->_destino->menorValor) aux_cid->_rotas[j]->_destino->menorValor = p;
        }

        aux_cid->status = 0;
        aux_cid = city_menor_value(cidades);
    }

    printf("%d\n", cidades[N -1].menorValor);

    return(EXIT_SUCCESS);
}