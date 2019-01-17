#include <stdio.h>
#include <stdlib.h>

struct Questao{
    int alte[5], very;
};

int main(int argc, char const *argv[]){

    int go = 1, qtProva, i, j, aux, very;
    char result;
    struct Questao questoes[260];
    
    do{
        scanf("%d", &qtProva);
        if(qtProva == 0){go = 0; continue;}

        for(i = 0; i < qtProva; i++){

            questoes[i].very = 0;
            for(j = 0; j < 5; j++){
                scanf("%d", &aux);
                if(aux > 127) questoes[i].alte[j] = 1;
                else {
                    questoes[i].alte[j] = 0;
                    questoes[i].very++; 
                }
            }
        }

        for(i = 0; i < qtProva; i++){
            result = '*';
            if (questoes[i].very < 2){
                for(j = 0; j < 5; j++){
                    if(questoes[i].alte[j] ==  0){
                        result = (65 + j); 
                        break;
                    }
                }
            }
            printf("%c\n", result);
        }
        
    } while (go);
    
    return 0;
}