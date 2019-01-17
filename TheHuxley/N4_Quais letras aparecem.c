#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void merge(char *string, int ini, int fim);

void sort(char *string, int ini, int meio, int fim);

int main(int argc, char const *argv[]){

    char frase[300], string[250], aux = '\0';
    int i = 0, q = 0;

    scanf("%[^\n]s", frase);

    while(frase[i] != '\0'){
        if(frase[i] !=  ' ') string[q++] = tolower(frase[i]);
        i++;
    }
    string[q] = '\0';

    merge(string, 0, q);


    for(i = 0; i < q; i++){
        if(string[i] != aux && (string[i] > 96 && string[i] < 123)){
            printf("%c\n", string[i]);
            aux = string[i];
        }
    }

    return 0;
}

void merge(char *string, int ini, int fim){

    if(fim - 1 <= ini) return;
    
    int meio = (ini + fim) / 2;
    merge(string, ini, meio);
    merge(string, meio, fim);
    sort(string, ini, meio, fim);
}

void sort(char *string, int ini, int meio, int fim){
    
    int i = ini, j = meio, t = 0;
    char *aux = malloc(sizeof(char) * (fim - ini));

    while(i < meio && j < fim){
        if(string[i] <= string[j]) aux[t++] = string[i++];
        else aux[t++] = string[j++];
    }

    while(i < meio) aux[t++] = string[i++];
    
    while(j < fim) aux[t++] = string[j++];  

    t = 0;
    for(i = ini; i < fim; i++){
        string[i] = aux[t++];
    }
}