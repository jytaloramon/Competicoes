#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int anoAtual, cal = 1986;

    scanf("%d", &anoAtual);

    if ((anoAtual - cal) % 76 == 0)
        cal = anoAtual + 76;

    while(cal < anoAtual)
        cal += 76;
    
    printf("%d\n", cal);

}

