#include <stdio.h>
#include <stdlib.h>

int main() {

    float t;
    char notacao;

    scanf("%c %f", &notacao, &t); 

    if(notacao == 'C'){
        if( t >= -273.0){
            printf("%.1f F\n%.1f K\n", (t * 1.8 + 32), (t + 273) );

        } else{
            printf("Valor de temperatura abaixo do minimo\n");
        }

    }else if(notacao == 'K'){
        if( t >= 0){
            printf("%.1f C\n%.1f F\n", (t-273), (t * 1.8 - 459.4) );

        } else{
            printf("Valor de temperatura abaixo do minimo\n");
        }

    } else{
         if( t >= -459,67){
            printf("%.2f C\n%.2f K\n", ((t- 32) / 1.8 ), ( ( (t - 32) / 9.0) * 5 +273) );

        } else{
            printf("Valor de temperatura abaixo do minimo\n");
        }
    }
    
    return 0;
}