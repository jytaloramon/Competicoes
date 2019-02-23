#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

   int *vet, key, i, length, result = 0;

    scanf("%d", &length);

    vet = malloc(sizeof(int) * length);

    for (i = 0; i < length; i++)
        scanf("%d", &vet[i]);

    for (i = 0; i < length; i++){
        if(key == vet[i]){
            result = 1;
            break;
        }   
    }

    if(result)
        printf("sim\n");
    else
        printf("nao\n");
        
}
