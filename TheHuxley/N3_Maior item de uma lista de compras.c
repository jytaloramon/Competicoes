#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int i = 0, cont = 1, id, idM, qt, qtM; 
    float preco, precoM = -100000;

    do{
        scanf("%d %d %f", &id, &qt, &preco);
        if(id != 0){
            if(preco > precoM){
                idM = id;
                qtM = qt;
                precoM = preco;
            }
        }
    } while(id);

    if (precoM != -100000)
        printf("Item mais caro\nCodigo: %d\nQuantidade: %d\nCusto: %.2f\n", idM, qtM, (qtM * precoM));
    else
        printf("nao tem compras\n");
}