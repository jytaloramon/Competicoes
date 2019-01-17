#include "stdio.h"
#include "stdlib.h"

int main(){

    int numPassagem, poltrona[45], idade[45], somaIdade = 0, i = 0, j;
    char data[10], saida[30], destino[30], horario[5], nomeAux[45][45];

    while(1){
        scanf("%d", &numPassagem);
        if(numPassagem == -1) break;
        scanf("%s", &data);
        getchar();
        gets(saida);
        gets(destino);
        scanf("%s", &horario);
        scanf("%d %d", &poltrona[i], &idade[i]);
        getchar();
        gets(nomeAux[i]);
        somaIdade += idade[i]; 
        i++;
    }
    somaIdade /= i;

    for(j = 0; j < i; j++){
        if(idade[j] > somaIdade && poltrona[j] % 2 == 0) printf("%s\n", nomeAux[j]);
    }

    return 0;
}