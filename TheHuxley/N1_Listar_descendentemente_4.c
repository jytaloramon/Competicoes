#include "stdio.h"

void main(){
	int vetor[5],i;
	
	for(i = 0; i < 4; i++){
		scanf("%d",&vetor[i]);
	}
	i = 3;
	while(i > 0 && vetor[i] < vetor[i-1]) {
		vetor[4] = vetor[i];
		vetor[i] = vetor[i-1];
		vetor[i-1] = vetor[4];
		i--;
	}
	
	for(i = 3; i >= 0; i--){
		printf("%d ",vetor[i]);
	}
	printf("\n");
	
}
