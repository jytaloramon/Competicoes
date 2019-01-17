#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,i,acima=0,abaixo=0;
    scanf("%d",&a);
    float b[a],soma=0,media,para;
    for(i=0;i<a;i++)
    {
        scanf("%f",&b[i]);
        soma +=b[i]; 
    }
    
    media =soma/a;
    para = (media*10)/100;
    
    for(i=0;i<a;i++)
    {
        if(b[i] < media-para )
        {
            abaixo +=1;
        }
        else if(b[i] > media+para )
        {
            acima +=1;
        }
    }
    printf("%.2f\n",media);
    printf("%d\n",acima);
    printf("%d\n",abaixo);
    
    return (EXIT_SUCCESS);
}