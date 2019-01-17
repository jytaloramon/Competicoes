#include "stdio.h"
#include "stdlib.h"

void quick(int *vetor, int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   if(inicio < j) quick(vetor, inicio, j);
   if(i < fim) quick(vetor, i, fim);   
}

int main(int *argv, char *args){

    int vet[150], aux = 0, i, maior = -100000, t = 0;

    do{
        if(aux > maior) maior = aux;
        scanf("%d", &aux);
        vet[t] = aux;
        t++;
    }while(aux != 99);

    quick(vet, 0, t - 2);

    printf("%d\n", vet[t-3]);

    return (EXIT_SUCCESS);
}