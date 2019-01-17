#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) {

    int a,b,c,d;
    scanf("%d",&a);
   for(c=1;c<=a;c++)
   {
       b=pow(c,2);
       d=pow(c,3);
       printf("%d %d %d\n",c,b,d);
   }
   
    return (EXIT_SUCCESS);
}

