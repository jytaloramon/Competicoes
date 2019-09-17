#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    int i, nPoste, poste, posteT = 0, posteC = 0; 

    scanf("%d", &nPoste);

    for (i = 0; i < nPoste; i++){
        scanf("%d", &poste);
        if(poste < 50)
            posteT++;
        else if(poste >= 50 && poste < 85)
            posteC++;
    }
    
    printf("%d %d\n", posteT, posteC);

    return 0;
}