#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b[6],c=0,d;
    scanf(" %d",&a);
    if(a>=1000 && a<10000)
    {
        b[0]=a/1000;
        a=a%1000;
        b[1]=a/100;
        a=a%100;
        b[2]=a/10;
        a=a%10;b[3]=a;
        for(d=0;d<4;d++)
        {
            if(b[d]%2==0)
            {
                c+=1;
            }
        }
    }
    
    else if (a>=10000)
    {
        b[0]=a/10000;
        a=a%10000;
        b[1]=a/1000;
        a=a%1000;
        b[2]=a/100;
        a=a%100;
        b[3]=a/10;
        a=a%10;
        b[4]=a;
        
        for(d=0;d<5;d++)
        {
            if(b[d]%2==0)
            {
                c+=1;
            }
        }
    }
    
    else if(a>=100 && a<1000)
    {
        b[0]=a/100;
        a=a%100;
        b[1]=a/10;
        a=a%10;
        b[2]=a;
        for(d=0;d<3;d++)
        {
            if(b[d]%2==0)
            {
                c+=1;
            }
        }
    }
    
    else if (a>=10 && a<100)
    {
        b[0]=a/10;
        a=a%10;
        b[1]=a;
        for(d=0;d<2;d++)
        {
            if(b[d]%2==0)
            {
                c+=1;
            }
        }
    }
    else
    {
        a=a%2;
        if(a==0)
        {
            c+=1;
        }
    }
    
    printf("%d\n",c);
    return (EXIT_SUCCESS);
}

