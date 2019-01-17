#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int qtDia, ano, mes;
    scanf("%d", &qtDia);
    ano = qtDia/365;
    qtDia -= ano*365;
    mes = qtDia/30;
    qtDia -= mes*30;
    printf("%d anos(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, qtDia);
    system("pause");
    return 0; 
}