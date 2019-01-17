#include "stdio.h"
#include "stdlib.h"

typedef struct NU{
    int valor, id;
    struct NU *prox;
}NU;

int main(int *args, char *argv){

    int soma = 0, i, n, maior = -100000, menorValor = 100000, idf;

    scanf("%d", &n);
    struct NU obj[n+1], *pont;

    for(i = 0; i < n; i++){
        scanf("%d", &obj[i].valor);
        obj[i].id = i;
        if(obj[i].valor < menorValor) {pont = &obj[i]; menorValor = obj[i].valor;}
        obj[i].prox = &obj[i+1];
    }
    obj[n-1].prox = &obj[0];
    idf = pont->id;    
    pont = pont->prox;
    
    while(pont->id != idf){
        soma += pont->valor;
        if(soma < 0 && pont->prox->valor >= pont->valor) soma = 0;
        else if(soma > maior) {maior = soma;}
        
        pont = pont->prox;
    }

    printf("%d\n", maior);

    return (EXIT_SUCCESS);
}