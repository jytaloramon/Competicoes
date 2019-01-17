#include "stdio.h"
#include "stdlib.h"

void Quick(int *vetor, int inicio, int fim){
   
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
   
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);   
}

int main(){

    int i, t = 0, k, aux, vT = 0, esp = 0;
    scanf("%d", &k);
    int vet[k];

    for(i = 0; i < k; i++){
        scanf("%d", &vet[i]);
        vT += vet[i];
    }

    Quick(vet, 0, k - 1);
    i = k - 1;
    vT /= 2;
    while(esp <= vT){
        esp += vet[i]; 
        i--;
        t++;
    }

    printf("%d\n", t);

    return 0;
}
