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

int main(){

    int i = 0, t, ptr[10000];
    
    while(scanf("%d", &ptr[i]) != EOF){
        i++; 
    }
    quick(ptr, 0, i - 1);

    printf("%d", ptr[0]);
    for(t = 1; t < i; t++){
        printf(" %d", ptr[t]);
    }
    
    printf("\n");
    return 0;
}
