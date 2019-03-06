#include "stdio.h"
#include "stdlib.h"

typedef struct {
    int golsF, golsS;
} Jogo;

int compare(const void *j1, const void *j2);

int main(int argc, char const *argv[]){

    int i, numJogos, numGolsCompra, t = 0, golsN, pt = 0;
    Jogo *_jogos;

    scanf("%d %d", &numJogos, &numGolsCompra);

    _jogos = malloc(sizeof(Jogo) * numJogos);

    for (i = 0; i < numJogos; i++) {
        scanf("%d %d", &_jogos[t].golsF, &_jogos[t].golsS);

        if (_jogos[t].golsF > _jogos[t].golsS)
            pt += 3;
        else
            t++;
    }
    
    qsort(_jogos, t, sizeof(Jogo), &compare);

    for (i = 0; i < t; i++){
        golsN = (_jogos[i].golsS - _jogos[i].golsF);

        if(golsN + 1 <= numGolsCompra){
            numGolsCompra -= (golsN + 1);
            pt += 3;
        } else if(golsN <= numGolsCompra){
            numGolsCompra -= golsN;
            pt++;
        }
    }

    printf("%d\n", pt);

    return 0;
}

int compare(const void *j1, const void *j2){
    Jogo *jogo1 = (Jogo *)j1, 
        *jogo2 = (Jogo *)j2;

    int df1 = -(jogo1->golsF - jogo1->golsS),
        df2 = -(jogo2->golsF - jogo2->golsS);

    return (df1 - df2);
}
