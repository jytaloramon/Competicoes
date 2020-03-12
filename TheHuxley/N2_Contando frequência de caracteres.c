#include "stdio.h"
#include "stdlib.h"

int character[257];

int main(int argc, char const *argv[]){
    
    int i = 0; 
    char text[500];

    scanf("%[^\n]s", text);

    while (text[i] != '\0')
        character[text[i++]]++;
    
    for(i = 256; i >= 9; i--)
        if(character[i] != 0)
            printf("%c %d\n", i, character[i]);

    return 0;
}
