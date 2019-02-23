#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    char item[4][20] = {"Life Mushroom\0", "Fire Flower\0", "Boost Star\0", "Mega Mushroom\0"};

    scanf("%d", &i);

    printf("%s\n", item[i - 1]);
}