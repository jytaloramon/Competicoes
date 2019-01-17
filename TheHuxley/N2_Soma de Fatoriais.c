#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, soma = 0, nu, total = 0;

    for(i = 0; i < 5; i++){
        soma = 1;
        scanf("%d", &nu);
        if(nu % 3 == 0){
            while(nu > 1){
                soma *= nu--;
            }
            total += soma;
        }
    }
    printf("%d\n", total);
    return 0;
}