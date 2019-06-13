#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct ALUNO{
    int matricula;
    char nome[30], sobrenome[30];
    float nota;
    int qtFalta;
    char status;
}ALUNO;

int tranfInt(char *valor, int tamanho){
    int value = 0, mult = 1;
    for(tamanho = tamanho - 1; tamanho >= 0; tamanho--){
        value += (valor[tamanho] - 48) * mult;
        mult *= 10;
    }
    return value;
}

float tranfFloat(char *valor, int tamanho){
    int mult = 1, p = 0, v[2] = {0, 0}, t = 0;
    float value = 0;
    for(tamanho = tamanho - 1; tamanho >= 0; tamanho--){
        if(valor[tamanho] == '.'){
            p++;
            mult = 1;
            continue;
        }
        v[p] += (valor[tamanho] - 48) * mult;
        mult *= 10;
    }
    value = v[1] + ((float) v[0] / 100);
    return value;
}

void confi(char *text, ALUNO *atual){
    int i = 0, p = 0, l = 0, tamM, tamN, tamF;
    char vet[6][30];
    
    
    while(text[i] != '\0'){
        if(text[i] != ' ') vet[p][l] = text[i];
        else{
            vet[p][l] = '\0';
            if(p == 0) tamM = l;
            else if (p == 3) tamN = l;
            else if(p == 4) tamF = l;
            p++;
            l = -1;
        }
        l++;
        i++;
    }
    vet[p][l] = '\0';

    atual->matricula = tranfInt(vet[0], tamM);
    strncpy(atual->nome, vet[1], 29);
    strncpy(atual->sobrenome, vet[2], 29);
    atual->nota = tranfFloat(vet[3], tamN);
    atual->qtFalta = tranfInt(vet[4], tamF);
    atual->status = vet[5][0];

}

int main(int *argc, char *argv){
   
    int qt, i, faltaTo = 0, *list, t = 0;
    float notaT = 0;
    char aux[150];

    scanf("%d", &qt);
    getchar();
    ALUNO aluno[qt];

    for(i = 0; i < qt; i++){
        gets(aux);
        confi(aux, &aluno[i]);
        faltaTo += aluno[i].qtFalta;
        notaT += aluno[i].nota;
    }    

    notaT /= qt;
    list = malloc(sizeof(int) * 2);    

    for(i = 0; i < qt; i++){
        if(aluno[i].status == 'M' && aluno[i].nota > notaT && 100 - (aluno[i].qtFalta * 100.00 / faltaTo) > 90) {
            list[t] = i; 
            t++;
            realloc(list, sizeof(int));
        }
    } 

    if(t == 0){printf("VAZIO\n");}
    else{
        for(i = 0; i < t; i++){
            printf("%d:%s\n", aluno[list[i]].matricula - 1, aluno[list[i]].sobrenome);
        }
    }
    
    return (EXIT_SUCCESS);
}