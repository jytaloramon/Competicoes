#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    float v1, v2, result;
    char op[15];

    scanf("%f %f", &v1, &v2);
    scanf("%s", op);

    if (op[0] == 'm')
        result = v1 * v2;
    else if (op[0] == 'd')
        result = v1 / v2;
    else if (op[1] == 'o')
        result = v1 + v2;
    else
        result = v1 - v2;

    printf("resultado = %.2f\n", result);

    return 0;
}