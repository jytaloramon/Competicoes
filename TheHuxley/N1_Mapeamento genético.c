#include "stdio.h"
#include "stdlib.h"

int main(){
	
    char dna[50], gene;
    int i = 0, seqAtual = 0, seqMaior = 0, posi;

    scanf("%s %c", &dna, &gene);

    while(dna[i] != '\0' ){
        if(dna[i] != gene){
            seqAtual = 0;

        }else{
            seqAtual++;
        }

        if(seqAtual > seqMaior ){
            seqMaior = seqAtual;
            posi = i - seqMaior;
        }
        i++;
    }

    if(seqMaior == 0){
        printf("ERRO\n");

    }else{
        printf("%d\n%d\n", posi+1, seqMaior);
    }

	return 0;
}