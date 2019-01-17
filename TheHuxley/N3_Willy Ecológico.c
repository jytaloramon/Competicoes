#include <stdio.h>
#include <stdlib.h>

void dividir(int *vet, int ini, int fim);
void ordena(int *vet, int ini, int meio, int fim);

int main(int *argc, char *argv){

    int n, m, i, j, *vet, soma;

    scanf("%d %d", &n, &m);

    vet = (int*) malloc(sizeof(int) * n);

    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    dividir(vet, 0, n);

    for(i = n - 1; i >= 0; i--){
        soma = 0;
        for(j = n - 1; j > i; j--){
            soma += (vet[j] - vet[i]);
            if(soma >= m){
                printf("%d\n", vet[i]);
                return 0;
            }
        }
    }
}

void dividir(int *vet, int ini, int fim){
    if (ini >= fim - 1) return;
    
    int meio = (ini + fim) / 2;

    dividir(vet, ini, meio);
    dividir(vet, meio, fim);
    ordena(vet, ini, meio, fim);
}

void ordena(int *vet, int ini, int meio, int fim){
	
    int i = ini, j = meio, q = 0, *vetaux = malloc(sizeof(int) * (fim - ini));

    while (i < meio && j < fim){
    
        if (vet[i] < vet[j]) vetaux[q++] = vet[i++];
        else vetaux[q++] = vet[j++];
        
    }

    while (i < meio) vetaux[q++] = vet[i++];
    
    while (j < fim) vetaux[q++] = vet[j++];

	q = 0;
    for (i = ini; i < fim; i++){
       vet[i] = vetaux[q++];
    }
}
