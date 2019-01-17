#include <stdio.h>
#include <stdlib.h>

int N, M, i, j;
int search(int *vet1, int *vet2);

int main() {

    scanf("%d", &N);
    int vetorN[N];
    for(i = 0; i < N; i++){
        scanf("%d", &vetorN[i]);
    }

    scanf("%d", &M);
    int vetorM[M];
    for(i = 0; i < M; i++){
        scanf("%d", &vetorM[i]);
    }

    printf("%d\n",search(vetorN, vetorM));

    return 0; 
}

int search(int *vet1, int *vet2){
    int truePerten ;
    if(N < M) {
        return 0;
    }

    for(i = 0; i < M; i++) {
        truePerten = 0;
        for(j = 0; j < N; j++) {
            if(vet1[j] == vet2[i]){
                truePerten = 1;
                break;
            }
        }
        if(truePerten == 0){
            return 0;
        }
    }

    return 1;
}