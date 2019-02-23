#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char text[210];
    
    scanf("%[^\n]s", text);
    
    printf("%d\n", strlen(text));
    
	return 0;
}