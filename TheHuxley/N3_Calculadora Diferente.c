#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    int a,b,i,j;float f;
    char c;
    scanf("%d",&j);
    
    for(i=0;i<j;i++)
    {
        scanf("%d %c %d",&a,&c,&b);
        if(c == '#')
        {
            f=(pow(a,b))*(pow(b,a));
            printf("%.2f\n",f);
        }
        else if(c=='@')
        {
            f= (pow(a,b))/(pow(b,a)); 
            printf("%.2f\n",f);
        }
        else if(c=='&')
        {
            f=b*(sqrt(a))+a*(sqrt(b));
            printf("%.2f\n",f);
        }
        else if(c=='%')
        {
            f=b*(sqrt(a))-a*(sqrt(b));
            printf("%.2f\n",f);
        }
    }
  
    return (EXIT_SUCCESS);
}

