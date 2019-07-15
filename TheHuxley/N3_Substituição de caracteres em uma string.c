#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
    
    char palavra[101], chrA, chrB;
    int i = 0;

    scanf("%s %c %c", palavra, &chrA, &chrB);

    while (palavra[i] != '\0'){
        if(palavra[i] == chrA)
            palavra[i] = chrB;
        
        i++;
    }

    printf("%s\n", palavra);

    return 0;
}