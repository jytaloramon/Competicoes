#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int linha,i,a,vec [12][12];
    float eq=0,m,s;
    char le;
    scanf(" %d",&linha);
    scanf(" %c",&le);
    if(le=='M'){
        for(i=0;i<12;i++)
        {
            for(a=0;a<12;a++)
            {
                scanf(" %d",&vec[i][a]);
                if(i==linha)
                {
                    eq+=vec[i][a];
                }
            }
        }
        m=eq/12;
        printf("%.1f\n",m);
    }
    else if(le=='S')
    {
        for(i=0;i<12;i++)
        {
            for(a=0;a<12;a++)
            {
                scanf(" %d ",&vec[i][a]);
                if(i==linha)
                {
                    eq+=vec[i][a];
                }
            }
        }
        s=eq;
        printf("%.1f\n",s);
    }
    
    return (EXIT_SUCCESS);
}


