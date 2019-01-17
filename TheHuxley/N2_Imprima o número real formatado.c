#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) {
    float a,v[1];
    scanf("%f",&a);
  
    v[1]=floor(a*100000)/100000;
    v[2]=floor(a*100)/100 ;
    printf("|%.2f|\n|%.5f|\n",v[2],v[1]);
    printf("|      %.1f|\n|%.1f      |\n",a,a);
    
    return (EXIT_SUCCESS);
}

