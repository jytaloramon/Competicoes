#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void maiusculo(char *palavra){
    int i = 0;
    while(palavra[i] != '\0'){
        palavra[i] = toupper(palavra[i]);
        i++;
    }
}

int main(int argc, char** argv) {

    int i, preco = 0, horario;
    char pala[40], pala2[40];

    for(i = 0; i < 7; i++){
        scanf("%s", &pala);
        maiusculo(pala);
        if(strcmp(pala,"REVISTA") == 0){
            preco += 750;
        }
        else if(strcmp(pala,"OUTDOOR") == 0){
            preco += 1500;
        }
        else if (strcmp(pala,"TV") == 0){
            scanf("%d", &horario);
            if(horario <= 20){
                preco += 1200;
            }else{
                preco += 2000;
            }
        }
        else{
            scanf("%s", &pala2);
            maiusculo(pala2);
            if(strcmp(pala2,"FM") == 0){
                preco += 500;
            }else{
                preco += 300;
            }
        }     
    }
    printf("%d.00\n", preco);
    return(EXIT_SUCCESS);
}