#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct word{
    char content[51];
    int length;
} Word;

Word word[51];

int main(int argc, char const *argv[]){
    
    int i, t = 0, j, qtWord = 0, maxWord;

    do {
        
        scanf("%d", &qtWord);

        if (!qtWord)
            continue;

        maxWord = 0;

        if (t)
            printf("\n");

        for (i = 0; i < qtWord; i++){
            scanf("%s", word[i].content);
            word[i].length = strlen(word[i].content);

            if (word[i].length > maxWord)
                maxWord = word[i].length;
        }

        for (i = 0; i < qtWord; i++){
            for (j = 0; j < abs(maxWord - word[i].length); j++) printf(" ");
            printf("%s\n", word[i].content);
        }
        
        t++;
    } while(qtWord);

    return 0;

}
