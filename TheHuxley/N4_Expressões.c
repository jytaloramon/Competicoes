#include "stdio.h"
#include "stdlib.h"

int conf(char *caracteres, int *exp, char *value){
    int i; 

    for(i = 0; i < 6; i++){
        if(*value == caracteres[i]){
            if(i == 0 || i == 2 || i == 4) exp[i / 2]++;
            else exp[i / 2]--;
            break;
        }
    }

    if(exp[i / 2] < 0)  return 0;
    return 1;
}

int main(int *args, char *argv){

    int q, i, j, expressoes[3], p;
    char sig[] = {'(', ')', '[', ']', '{', '}'}, aux[10000], saida; 

    scanf("%d", &q);

    for(i = 0; i < q; i++){
        scanf("%s", &aux);

        expressoes[0] = 0; expressoes[1] = 0; expressoes[2] = 0;
        saida = 'S';
        j = 0;

        while(aux[j] != '\0'){
            if(conf(sig, expressoes, &aux[j]) == 0) {saida = 'N'; break;}
            j++;
        }

        if(saida == 'N') printf("N\n");
        else{
            for(j = 0; j < 3; j++){
                if(expressoes[j] != 0) {printf("N\n"); break;} 
            }
            if(j == 3) printf("S\n");
        }
    }
  
    return (EXIT_SUCCESS);
}