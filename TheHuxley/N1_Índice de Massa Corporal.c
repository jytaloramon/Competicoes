#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float massa,altura,imc;
    scanf("%f%f",&massa,&altura);
    imc = massa/(pow(altura,2));
    if(imc<18.5)
    {
        printf("%.2f MAGREZA\n",imc);
    }     
    else if(imc>=18.5 && imc<=24.9)
    {
        printf("%.2f SAUDAVEL\n",imc);
    }
    else if(imc>=25 && imc<=29.9)
    {
        printf("%.2f SOBREPESO\n",imc);
    }  
    else 
    {
        printf("%.2f OBESIDADE\n",imc);
    }  
    
            
    return (EXIT_SUCCESS);
}

