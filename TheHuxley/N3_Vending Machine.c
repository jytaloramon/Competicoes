#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct {
    int index, currentIndexProduct;
    char productName[10][12];
    float preco;
} Slot;

Slot *findProducts(char const *name, Slot *_slots);

int main(int argc, char const *argv[]){

    int i = 0;
    float total = 0;
    char input[105], *_text;
    Slot *_slots = malloc(sizeof(Slot) * 10), *_pointSlot;
    
    for(i = 0; i < 10; i++){
        scanf("%[^\n]s", input);
        getchar();
        
        _slots[i].index = i;
        _slots[i].currentIndexProduct = -1;

        _text = strtok(input, " ");
        while(_text != NULL){
            strcpy(_slots[i].productName[++_slots[i].currentIndexProduct], _text);
            _text = strtok(NULL, " ");
        }
    }
    
    getchar();
    scanf("%[^\n]s", input);
    
    i = 0;
    _text = strtok(input, " ");
    while(_text != NULL){
        _slots[i++].preco = atof(_text);
        _text = strtok(NULL, " ");
    }

    getchar();
    
    while(scanf("%s", input) != EOF){
        _pointSlot = findProducts(input, _slots);

        if(_pointSlot == NULL)
            printf("Nao temos %s disponivel no momento.\n", input);
        else {

            if(_pointSlot->index == 5)
                printf("Opa, um item 0800!\n");
            else {
                total += _pointSlot->preco;
            }
        }
    }  
    
    printf("Compras realizadas com sucesso. Voce gastou R$%.2f.\n", total);
}   

Slot *findProducts(char const *name, Slot *_slots){
    int i;
    
    for(i = 0; i < 10; i++){
        if(_slots[i].currentIndexProduct != -1 && !strcmp(name, _slots[i].productName[_slots[i].currentIndexProduct])){
            _slots[i].currentIndexProduct--;
            return &_slots[i];
        }
    }

    return NULL;
}