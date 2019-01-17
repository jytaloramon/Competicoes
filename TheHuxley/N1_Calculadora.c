#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    float a=0,b=0,c=0,n=0,i=0,div=0;
    char op;
    scanf("%f %f %c",&a,&b,&op);
    if(op=='+'){
        c=a+b;
        printf("%.3f\n",c);
    }else if(op=='-'){
        c=a-b;
        printf("%.3f\n",c);
    }else if(op=='*'){
    	
        c=a*b;
        printf("%.3f\n",c);
    }else if(op=='/'){
    	if(b==0)
		{
			printf("operacao nao pode ser realizada\n");
			div++;
		}
		else
		{
			c=a/b;
			printf("%.3f\n",c);
		}
       if(op=='&')
	   {
	   	return 0;
	   }
    }
    for(i=0;op!='&';i++){
        scanf("%f",&n);
        getchar();
        scanf("%c",&op);
        getchar();

        if(op=='+'){
        c=c+n;
        printf("%.3f\n",c);
    }else if(op=='-'){
        c=c-n;
        printf("%.3f\n",c);
    }else if(op=='*'){
        c*=n;
        printf("%.3f\n",c);
    }
	else if(op=='/'){
		if(n==0)
		{
			printf("operacao nao pode ser realizada\n");
			div++;
		}
		else
		{
		c/=n;
        printf("%.3f\n",c);
		}
    }
	else if(op=='&'){
        break;
    }else{
    	printf("operacao nao pode ser realizada\n");
	}
	div=0;

    }

    return 0;
}
