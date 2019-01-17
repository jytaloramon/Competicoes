#include <stdio.h>
#include <stdlib.h>

struct alu{
    int numero;
    int acertos;
}aluno[1000];

int calcula(char *gaba, char *respost){
    int i = 0, soma = 0; 
    for(i = 0; i < 10; i++){
        if(gaba[i] == respost[i])
            soma++;
    }
    return soma;
}

void main(){

    char gabarito[11], resposta[11], percentual = '%';
    int i = 0, j, aux, totalAprovado = 0, notaMaisRepete[1000] = {0} , indexValorMaio = 0, aux1;
    scanf("%s", &gabarito);

    while (1){
        scanf("%d", &aux);
        if(aux == 9999){
            break;
        }   
        aluno[i].numero = aux;
        scanf("%s", &resposta);
        aux1 = calcula(gabarito, resposta);
        aluno[i].acertos = aux1;
        if(aux1 >= 6){
            totalAprovado++;
        }
        notaMaisRepete[aux1]++;
        if(notaMaisRepete[aux1] > notaMaisRepete[indexValorMaio]){
            indexValorMaio = aux1;
        }
        i++;
    }

    for(j = 0; j < i; j++){
        printf("%d %d.0\n", aluno[j].numero, aluno[j].acertos);
    }
    printf("%.1f%c\n", ((float)totalAprovado*100)/i, percentual);
    printf("%d.0\n", indexValorMaio);
}