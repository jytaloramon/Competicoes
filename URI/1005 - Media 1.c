#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float n1, n2;
    scanf("%f %f",&n1, &n2);
    float media = (n1 * 3.5 + n2 * 7.5)/(11);
    printf("MEDIA = %.5f\n", media);
    
    return (EXIT_SUCCESS);
}