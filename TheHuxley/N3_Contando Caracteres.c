#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char const *argv[]){

    int lengths[50], bigLength = 0, i, count;
    char input[105], bigString[105], *ptr;

    while(1){
        scanf("%[^\n]s", input);

        if(input[0] == '0' && input[1] == '\0')
            break;
        
        count = 0;
        ptr = strtok(input, " ");

        while(ptr != NULL){
            lengths[count++] = strlen(ptr);
            if(lengths[count - 1] >= bigLength){
                bigLength = lengths[count - 1];
                strcpy(bigString, ptr);
            }
            ptr = strtok(NULL, " ");
        }   
        
        printf("%d", lengths[0]);
        for(i = 1; i < count; i++)
            printf("-%d", lengths[i]);
        
        printf("\n");
        getchar();
    }
    
    printf("Maior palavra: %s\n", bigString);

    return 0;
}
