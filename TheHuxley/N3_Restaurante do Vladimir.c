#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[]){

    char prod[30], sabor[30];
    int qt;
    float total;

    scanf("%[^\n]s", prod);
    getchar();
    scanf("%[^\n]s", sabor);
    getchar();
    scanf("%d", &qt);

    total = (qt * 2);
    if(toupper(prod[0]) == 'P'){
        if (toupper(sabor[0]) == 'C' || toupper(sabor[0]) == 'M') 
            total += (qt * 20.60);
        else 
            total += (qt * 30.90);
    } else{
        if (toupper(sabor[0]) == 'Q')
            total += (qt * 18.00);
        else
            total += (qt * 23.00);
    }

    printf("%.2f\n", total);
}