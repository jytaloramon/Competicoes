#include <stdio.h>
#include <stdlib.h>

typedef struct ALUNO{
    int id;
    char nome[51];
    float nota;
}ALUNO;

void dividir(ALUNO *vet, int ini, int fim);
void ordena(ALUNO *list, int ini, int meio, int fim);

int main(int *argc, char *argv){

    int naluno, i;
    ALUNO *_vetAluno;
    float mediaNotas = 0;

    scanf("%d", &naluno);
    
    _vetAluno = malloc(sizeof(ALUNO) * naluno);

    for(i = 0; i < naluno; i++){
        scanf("%d %[^\n]s", &_vetAluno[i].id, &_vetAluno[i].nome);
        getchar();
        scanf("%f", &_vetAluno[i].nota);
        mediaNotas += _vetAluno[i].nota;
    }

    mediaNotas /= naluno;

    dividir(_vetAluno, 0, naluno);
   
    for(i = 0; i < naluno; i++){
        if(_vetAluno[i].nota > mediaNotas) printf("Matricula: %d Nome: %s Nota: %.1f\n", _vetAluno[i].id, _vetAluno[i].nome, _vetAluno[i].nota);
    }

    printf("Media = %.2f\n", mediaNotas);
}

void dividir(ALUNO *vet, int ini, int fim){
    if (ini >= fim - 1) return;
    
    int meio = (ini + fim) / 2;

    dividir(vet, ini, meio);
    dividir(vet, meio, fim);
    ordena(vet, ini, meio, fim);
}

void ordena(ALUNO *list, int ini, int meio, int fim){
	
    int i = ini, j = meio, q = 0;

    ALUNO *listAux = malloc(sizeof(ALUNO) * (fim - ini));

    while(i < meio && j < fim){
    
        if(list[i].nota < list[j].nota) listAux[q++] = list[i++];
        else if (list[i].nota > list[j].nota) listAux[q++] = list[j++];
        
        else{
            if (list[i].id < list[j].id) listAux[q++] = list[i++];
            else listAux[q++] = list[j++];
        }
    }

    while(i < meio) listAux[q++] = list[i++];
    while(j < fim) listAux[q++] = list[j++];
      
    q = 0; 
    for(i = ini; i < fim; i++){
        list[i] = listAux[q++];
    }
}
