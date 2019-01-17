#include <stdio.h>
#include <stdlib.h>

int main(){

    int alibaba = 0, alcapone = 0, totalVotos = 0, votoNulo = 0, votoBranco = 0, aux;
    float md;
    do{
        scanf("%d", &aux);
        if(aux == 83){
            alibaba++;
        }
        else if(aux == 93){
            alcapone++;
        }
        else if (aux == 0){
            votoBranco++;
        }
        else{
            votoNulo++;
            continue;
        }
        totalVotos++;
    }while( aux != -1);
    votoNulo--;

    printf("%d\n%d\n%d\n%d\n", alibaba, alcapone, votoBranco, votoNulo);
    if(alibaba > alcapone){
        printf("83\n");
    }
    else{
        printf("93\n");
    }

    md = (float) alibaba*100/totalVotos;
    printf("%.2f\n", md);
    md = (float) alcapone*100/totalVotos;
    printf("%.2f\n", md);
    
    return 0;
}
