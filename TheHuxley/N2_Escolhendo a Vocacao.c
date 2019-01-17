#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int forca, inteligencia, destreza, furtividade, peso;
    scanf("%d%d%d%d%d", &forca, &inteligencia, &destreza, &furtividade, &peso);
    
    if(forca > 5 && destreza > 5 && peso < 5 && inteligencia > 5 && furtividade > 5){
        printf("Paladin\n");
    }
    else if(forca > 5 && destreza > 5 && peso > 5){
        printf("Knight\n");
    }
    else if(forca > 10 && inteligencia < 5 && destreza < 5 && furtividade < 5 && peso > 5){
        printf("Orc\n");
    }
    else{
        printf("Mage\n");
    }
}