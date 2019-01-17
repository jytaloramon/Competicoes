#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Palavra{
    char ing[30], port[30];
}Palavra;

void merge(Palavra *palavras, int ini, int fim);

void sort(Palavra *palavras, int ini, int meio, int fim);

char* find(char *palavra, Palavra *dicionario, int ini, int fim);

char** split(char *frase, int *qtP); 

void montFrase(char *frasePrincipal, char *pala, int *posi);

int main(int argc, char const *argv[]){

    int i, j, qtP, qtF = 0, qtPSplit, posiFrase;
    char aux[5], frases[250][1000], **retorno;
    Palavra pala[250];

    scanf("%d", &qtP);

    for(i = 0; i < qtP; i++) scanf("%s %s %s", pala[i].ing, aux, pala[i].port);
    
    while(1){
        getchar();
        scanf("%[^\n]s", frases[qtF]);
        if(frases[qtF][0] == '*' && frases[qtF][1] == '\0') break;
        qtF++;
    }

    merge(pala, 0, qtP);

    for(i = 0; i < qtF; i++){

        retorno = split(frases[i], &qtPSplit);
        posiFrase = 0;

        for (j = 0; j < qtPSplit; j++){
            montFrase(frases[i], find(retorno[j], pala, 0, qtP), &posiFrase);
        }
        frases[i][posiFrase - 1] = '\0';

        printf("%s\n", frases[i]);
    }

    return 0;
}

void merge(Palavra *palavras, int ini, int fim){

    if(fim - 1 <= ini) return;

    int meio = (ini + fim) / 2;

    merge(palavras, ini, meio);
    merge(palavras, meio, fim);
    sort(palavras, ini, meio, fim);
}

void sort(Palavra *palavras, int ini, int meio, int fim){

    int i = ini, j = meio, count = 0;
    Palavra *auxP = malloc(sizeof(char) * (fim - ini));


    while(i < meio && j < fim){
        if (strcmp(palavras[i].ing, palavras[j].ing) < 0) auxP[count++] = palavras[i++];
        else auxP[count++] = palavras[j++];
    }

    while(i < meio) auxP[count++] = palavras[i++];

    while(j < fim) auxP[count++] = palavras[j++];

    j = 0;
    for(i = ini; i < fim; i++) palavras[i] = auxP[j++];

}

char* find(char *palavra, Palavra *dicionario, int ini, int fim){

    int meio = (ini + fim) / 2, result = strcmp(palavra, dicionario[meio].ing);

    if(!result){
        return dicionario[meio].port;
    }

    if(ini == meio){
        return NULL;
    }

    if(result > 0){
        find(palavra, dicionario, meio, fim);
    } else{
        find(palavra, dicionario, ini, meio);
    }
}

char **split(char *frase, int *qtP){
    
    int i = 0, j = 0, t = 0;
    char **pala = malloc(sizeof(char) * 250);

    pala[j] = malloc(sizeof(char) * 40);

    while(frase[i] != '\0'){
        if(frase[i] == ' '){
            pala[j][t] = '\0';
            j++;
            t = 0;
            pala[j] = malloc(sizeof(char) * 40);
        } else{
            pala[j][t++] = frase[i];
        }
        i++;
    }

    pala[j++][t] = '\0';
    *qtP = j;

    return pala;
}

void montFrase(char *frasePrincipal, char *pala, int *posi){

    int i = 0;
    while(pala[i] != '\0') frasePrincipal[(*posi)++] =  pala[i++];
    
    frasePrincipal[(*posi)++] = ' ';
}