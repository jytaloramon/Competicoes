#include <stdio.h>
#include <stdlib.h>

int main() {

    int tempoS, hr, min;

    scanf("%d", &tempoS); 

    hr = tempoS / 3600; 
    tempoS = tempoS - (hr * 3600); 
    min = tempoS / 60; 
    tempoS = tempoS - (min * 60);
    
    printf("%d h %d m %d s\n", hr, min, tempoS);  

    return 0;
}