#include "stdio.h"
#include "stdlib.h"

int transformers(char *pala, int tam){
    int i, nu = 0, multi = 1, sinal = 1, fim = 0;

    if(pala[0] == '-'){sinal = -1; fim = 1;}
    for(i = tam - 1; i >= fim; i--){
        nu += ((pala[i] - 48) * multi);
        multi *= 10;
    }
    return nu * sinal;
}

int main(int *args, char *argv){

    char lista[500], nume[15];
    int i = 1, j = 0, q = 0, soma = 0;

    scanf("%[^\n]s", &lista);

    while(lista[i] != '\0'){
        if(lista[i] == ',' || lista[i] == ']') {
            nume[j] = '\0';
            if((nume[j-1] - 48) % 2 == 1){
                soma += transformers(nume, j); 
                q++;
            } 
            j = 0;
        } else {
            if(lista[i] != ' '){
                nume[j] = lista[i];
                j++;
            }
        } 
        i++;
    }    

    printf("%.2f\n", (float)soma / q);
    
    return (EXIT_SUCCESS);
}