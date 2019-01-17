#include "stdio.h"
#include "stdlib.h"

int main(){

    float t, t1, t2;

    printf("Informe o comprimento do primeiro lado do triangulo:\n");
    scanf("%f", &t);
    printf("Informe o comprimento do segundo lado do triangulo:\n");
    scanf("%f", &t1);
    printf("Informe o comprimento do terceiro lado do triangulo:\n");
    scanf("%f", &t2);
    if(t + t1 > t2 || t + t2 > t1 || t1 + t2 > t){
        printf("Os lados informados podem formar um triangulo\n");
        if(t == t1 && t == t2){
            printf("Triangulo Equilatero\n");
        } else if(t != t1 && t1 != t2 && t != t2){
            printf("Triangulo Escaleno\n");
        } else{
            printf("Triangulo Isosceles\n");
        }

    } else{
        printf("Os lados informados nao podem formar um triangulo\n");
    }

    return 0;
}