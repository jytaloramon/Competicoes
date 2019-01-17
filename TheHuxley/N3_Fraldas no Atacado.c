#include "stdio.h"
#include "stdlib.h"

int main(){

    int idade, tUsa = 0, p;
    char continua[4];
    scanf("%d", &idade); 

    while(1){
        if(idade <= 2) tUsa += 9;
        else { tUsa += 6;} 
        scanf("%s", &continua);
        if(continua[0] == 'n' || continua[0] == 'N') break;
        scanf("%d", &idade); 
    }

    tUsa *= 30;
    p = tUsa / 100;
    if(p * 100 < tUsa) p++;

    printf("%d\n%d\n", p, (p*100) - tUsa);

    return 0;
}