#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char const *argv[]){
   
    char date[10], tokens_date[3][3], *token;
    int i = 0;

    scanf("%s", date);

    token = strtok(date, "/");
    while (token){
        tokens_date[i][0] = token[0];
        tokens_date[i][1] = token[1];
        tokens_date[i++][2] = '\0';
        token = strtok(NULL, "/");
    }

    printf("%s/%s/%s\n", tokens_date[1], tokens_date[0], tokens_date[2]);
    printf("%s/%s/%s\n", tokens_date[2], tokens_date[1], tokens_date[0]);
    printf("%s-%s-%s\n", tokens_date[0], tokens_date[1], tokens_date[2]);

    return 0;
}
