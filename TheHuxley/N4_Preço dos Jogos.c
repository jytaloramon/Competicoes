#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,i,j,d,k;
    float f,t,test,preco,queda;
    
    scanf("%d",&a);
    
    for(i=0;i<a;i++)
    {
        k=0;
        scanf("%d%f",&d,&preco);
        if(preco<45)
        {
            printf("Jogo[%d] = R$%.2f\n",i,preco);
        }
        else
        {
            if(d==0)
            {
                queda=25;
            }
            else if(d==1)
            {
                queda=20;
            }
            else if(d==2)
            {
                queda=18;
            }
            else if(d==3)
            {
                queda=15;
            }
            else if(d==4)
            {
                queda=12;
            }
            else if(d==5)
            {
                queda=10;
            }
           
            for(j=0;j<3;j++)
            {
                if(k==0 && preco<=100)
                {
                    queda=queda/2;
                    k+=1;
                }
                test=(preco*queda)/100;
                if(preco-test>=45)
                {
                        preco=preco-test;
                }
                else
                {
                    preco=45;
                    break;
                }
            }
            printf("Jogo[%d] = R$%.2f\n",i,preco);

        }
    }
    
    return (EXIT_SUCCESS);
}

