#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double valor,resto;
    int n100,n50,n20,n10,n5,n2,n1,n05,n025,n010,n005,n001;
    scanf("%lf",&valor);
   
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
    n05 = resto/0.50;
        resto = resto-(n05*0.50);
    n025 = resto/0.25;
        resto = resto-(n025*0.25);
    n010 = resto/0.10;
        resto = resto-(n010*0.10);
    n005 = resto/0.05;
        resto = resto-(n005*0.05);
    n001 = (resto+0.003)/0.01;
        resto = resto-(n001*0.01);
        
        
      
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",n100,n50,n20,n10,n5,n2);
    printf("MOEDAS:\n"); 
    printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",n1,n05,n025,n010,n005,n001);
        
    
        
    return (EXIT_SUCCESS);
}

