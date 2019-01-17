#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int i,j, aux, vetor[3];

  for( i = 0; i < 3; i++){
    scanf("%d",&vetor[i]);
  }
  for(i = 0; i < 3; i++){
      for (j = 0; j < 3; j++) {
        if(i != j && vetor[j]>vetor[i]){
          aux = vetor[i];
          vetor[i] = vetor[j];
          vetor[j] = aux;
        }
      }
  }
  for( i = 0; i < 3; i++){
    printf("%d\n",vetor[i] );
  }
  return 0;
}
