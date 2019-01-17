#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct JOGADOR{
    char nome[51];
    int habilidade;
} JOGADOR;

typedef struct TIME{
    int posi;
    JOGADOR *_jogadore;
} TIME;

typedef void (*Ordena)(JOGADOR *jodadores, int ini, int meio, int fim);

void dividir(JOGADOR *jodadores, int ini, int fim, Ordena ondena);

void mergeNome(JOGADOR *jodadores, int ini, int meio, int fim);

void mergeHabili(JOGADOR *jodadores, int ini, int meio, int fim);

int main(int *argc, char const *argv){

    int qtJog, qtTime, i, j = 0, qtJogTime;
    JOGADOR *jogad;
    TIME *times;

    scanf("%d %d", &qtJog, &qtTime);

    jogad = malloc(sizeof(JOGADOR) * (qtJog) + 10);
    times = malloc(sizeof(TIME) * qtTime);

    qtJogTime = qtJog / qtTime + 50;

    for (i = 0; i < qtTime; i++){
        times[i]._jogadore = malloc(sizeof(JOGADOR) * qtJogTime);
        times[i].posi = 0;
    }

    for (i = 0; i < qtJog; i++){
        scanf("%s %d", &jogad[i].nome, &jogad[i].habilidade);
    }

    dividir(jogad, 0, qtJog, mergeHabili);

    for (i = 0; i < qtJog; i++){
        
        times[j]._jogadore[times[j].posi] = jogad[i];
        times[j].posi++;
        j++;
        if (j == qtTime) j = 0;
    }

    for (i = 0; i < qtTime; i++){
        dividir(times[i]._jogadore, 0, times[i].posi, mergeNome);
        printf("Time %d\n", i + 1);
        for(j = 0; j < times[i].posi; j++){
            printf("%s\n", times[i]._jogadore[j].nome);
        }
        printf("\n");   
    }

    return 0;
}

void dividir(JOGADOR *jodadores, int ini, int fim, Ordena ondena){
    if (ini >= fim - 1)
        return;

    int meio = (ini + fim) / 2;

    dividir(jodadores, ini, meio, ondena);
    dividir(jodadores, meio, fim, ondena);
    ondena(jodadores, ini, meio, fim);
}

void mergeNome(JOGADOR *jodadores, int ini, int meio, int fim){
    
    int i = ini, j = meio, t = 0;

    JOGADOR *jog = malloc(sizeof(JOGADOR) * (fim - ini));

    while (i < meio && j < fim){
        
        if (strcmp(jodadores[i].nome, jodadores[j].nome) <= 0)
            jog[t++] = jodadores[i++];
        else
            jog[t++] = jodadores[j++];
    }

    while (i < meio)
        jog[t++] = jodadores[i++];

    while (j < fim)
        jog[t++] = jodadores[j++];

    t = 0;
    for (i = ini; i < fim; i++)
        jodadores[i] = jog[t++];
}

void mergeHabili(JOGADOR *jodadores, int ini, int meio, int fim){

    int i = ini, j = meio, t = 0;

    JOGADOR *jog = malloc(sizeof(JOGADOR) * (fim - ini));

    while (i < meio && j < fim){
        if (jodadores[i].habilidade >= jodadores[j].habilidade)
            jog[t++] = jodadores[i++];
        else
            jog[t++] = jodadores[j++];
    }

    while (i < meio)
        jog[t++] = jodadores[i++];

    while (j < fim)
        jog[t++] = jodadores[j++];

    t = 0;
    for (i = ini; i < fim; i++)
        jodadores[i] = jog[t++];

}