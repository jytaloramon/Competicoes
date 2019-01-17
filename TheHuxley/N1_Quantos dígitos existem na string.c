#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int b,c=0;
    char a[201];
    scanf(" %s",&a);
    
    for(b=0;b<=strlen(a);b++)
    {
        if(a[b]=='0'||a[b]=='1'||a[b]=='2'||a[b]=='3'||a[b]=='4'||a[b]=='5'||a[b]=='6'||a[b]=='7'||a[b]=='8'||a[b]=='9')
        {
            c+=1;
        }
    }
    printf("%d\n",c);
    
    return (EXIT_SUCCESS);
}
