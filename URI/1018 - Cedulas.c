#include "stdio.h"

int main(int argc, char** argv) {
    double valor, resto, q;
    int n100, n50, n20, n10, n5, n2, n1;
    scanf("%lf", &valor);
    q = valor;

    n100 = valor/100;
        resto = valor-(n100*100.00);
    n50 = resto/50;
        resto = resto-(n50*50.00);
    n20 = resto/20;
        resto = resto-(n20*20.00);
    n10 = resto/10;
        resto = resto-(n10*10.00);
    n5 = resto/5;
        resto = resto-(n5*5.00);    
    n2 = resto/2;
        resto = resto-(n2*2.00);
        
    n1 = resto/1;
        resto = resto-(n1*1.00);
    
    printf("%.0lf\n", q);
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n100, n50, n20, n10, n5, n2, n1);
  
    return 0;
}