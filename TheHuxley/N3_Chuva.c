#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,i,j;
    scanf("%d",&a);
    int chu[a*2][a*2];
    for(i=0;i<a*2;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&chu[i][j]);
        }
    }
    
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d",chu[i][j]+chu[i+a][j]);
            if(j<a)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

