#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int main(int *args, char *argv){

    int tam = 10, i, j = 0, menor = 100000, vet[tam];
    char text[1000002], tes[] = {'v', 'o', 'u', 'p', 'a', 's', 'r', 'e', 'm', '1'}; 
    
    scanf("%[^\n]s", &text);
    for(i = 0; i < tam; i++){
        vet[i] = 0;
    }

    while(text[j] != '\0' && text[j] != '\0'){
        for(i = 0; i < tam; i++){
            if(tolower(text[j]) == tes[i]) {vet[i]++; break;}
        }
        j++;
    }
    vet[5] /= 2;
    vet[4] /= 2;

    for(i = 0; i < tam; i++){
        if(vet[i] < menor) menor = vet[i];
    }

    printf("%d\n", menor);

    return (EXIT_SUCCESS);
}