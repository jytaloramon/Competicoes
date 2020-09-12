#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

char text[500][1024],
        char_scap[] = {'*', ')', '$', '!', '+', '@', '-', '/', '(', '%'};

void run(int idx);

int main(int argc, char const *argv[]){

    int i, line_count;

    while (fgets(text[line_count++], 500, stdin) != NULL);

    for (i = line_count - 1; i >= 0; i--){
        run(i);
        printf("\n");
    }    

    return 0;
}

void run(int idx){
    int i = 0, count_digit = 0;
    char c;
    while ((c = text[idx][i]) != '\0'){
        if(c >= 97 && c < 123){
            printf("%c", count_digit % 2 == 0 ? toupper(c) : tolower(c));
        } else if(c >= 65 && c < 91){
            if(c < 74)
                printf("%c", c - 16);
            else if (c < 84)
                printf("1%c", c - 26);
            else
                printf("2%c", c - 36);
        } else if (c >= 48 && c < 58)
            printf("%c", char_scap[c - 48]);
        else{
            if(c != ' ') count_digit++;
        }
        
        i++;
    } 
}
