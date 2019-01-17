#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compara(char *nome1, char *nome2){

    int i = 0, j = 0;

    while (nome1[i] != '\0' && nome2[i] != '\0'){
        if (nome1[i] < nome2[i])
            return -1;
        if (nome1[i] > nome2[i])
            return 1;
        i++;
    }

    if (nome1[i] == '\0')
        return -1;
    if (nome2[i] == '\0')
        return 1;

    return 0;
}

void merge(char (*nome)[51], int ini, int meio, int fim){

    int i = ini, j = meio, t = 0;
    char(*vet)[51] = malloc(sizeof(char) * (fim - ini + 10));

    while (i < meio && j < fim) {
        if (compara(nome[i], nome[j]) <= 0)
            strcpy(vet[t++], nome[i++]);
        else
            strcpy(vet[t++], nome[j++]);
    }

    while (i < meio)
        strcpy(vet[t++], nome[i++]);

    while (j < fim)
        strcpy(vet[t++], nome[j++]);

    t = 0;
    for (i = ini; i < fim; i++)
        strcpy(nome[i], vet[t++]);
}

void dividi(char (*nome)[51], int ini, int fim){

    if (ini >= fim - 1)
        return;

    int meio = (ini + fim) / 2;

    dividi(nome, ini, meio);
    dividi(nome, meio, fim);

    merge(nome, ini, meio, fim);
}

int main(int *argc, char *argv){

    int qt, i, q = 0;
    char nome[310][51];

    while (1){

        scanf("%d", &qt);
        if (qt == 0)
            break;

        for (i = 0; i < qt; i++){
            getchar();
            scanf("%[^\n]s", &nome[i]);
        }

        dividi(nome, 0, i);

        for (i = 0; i < qt; i++){
            printf("%s\n", nome[i]);
        }
    }
}