#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int qt, i, *vetTDist, *vetTSaida, timeT = 0, espera;

    scanf("%d", &qt);

    vetTDist = malloc(sizeof(int) * qt);
    vetTSaida = malloc(sizeof(int) * qt);

    for(i = 0; i < qt; i++) 
        scanf("%d", &vetTDist[i]);

    for (i = 0; i < qt; i++)
        scanf("%d", &vetTSaida[i]);

    timeT = vetTDist[0];

    for (i = 1; i < qt; i++){
        if(timeT % vetTSaida[i] == 0)
            espera = 0;
        else 
            espera = vetTSaida[i] - (timeT % vetTSaida[i]);
        timeT += vetTDist[i] + espera;
    }

    printf("%d\n", timeT);
    
    return 0;
}
