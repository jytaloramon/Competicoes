#include <stdio.h>
#include <stdlib.h>

struct numero{
    int valor;
}numero[1000];

int main(){
    
    int i = 0, j;;

    while(scanf("%d", &numero[i].valor) != EOF){
        i++;
    }
    printf("%d",numero[i-1].valor);
    j = i-2;
    while(j >= 0 ){
        printf(" %d", numero[j].valor);
        j--;
    }
    return 0;
}