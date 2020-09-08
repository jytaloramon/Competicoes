#include "stdio.h"
#include "stdlib.h"

int count_c[3]; 

int main(int argc, char const *argv[]){
    
    int v, i, input_n, sum = 0;
    char type;

    scanf("%d", &input_n);
    
    for (i = 0; i < input_n; i++){
        scanf("%d %c", &v, &type);

        sum += v;

        switch (type){
        case 'C':
            count_c[0] += v;
            break;
        case 'R':
            count_c[1] += v;
            break;
        default:
            count_c[2] += v;
            break;
        }
    }

    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", count_c[0]);
    printf("Total de ratos: %d\n", count_c[1]);
    printf("Total de sapos: %d\n", count_c[2]);
    printf("Percentual de coelhos: %.2f %\n", count_c[0] * 100.0 / sum);
    printf("Percentual de ratos: %.2f %\n", count_c[1] * 100.0 / sum);
    printf("Percentual de sapos: %.2f %\n", count_c[2] * 100.0 / sum);

    return 0;
}
