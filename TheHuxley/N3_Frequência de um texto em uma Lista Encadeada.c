#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){

    int count[257], i;
    char text[260];

    scanf("%[^\n]s", text);

    for (i = 0; i <= 256; i++)
        count[i] = 0;

    i = 0;
    while(text[i] != '\0')
        count[text[i++]]++;

    for (i = 256; i >= 0; i--){
        if(count[i] > 0)
            printf("%c %d\n", i, count[i]);
    }
}
