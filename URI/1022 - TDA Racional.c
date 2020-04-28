#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int mdc(int v1, int v2){
    int r = v1 % v2;

    if (r == 0)
        return v2;
    if (r == 1)
        return 1;

    mdc(v2, r);
}

int main(int argc, char const *argv[]){
    
    int i, qt, values[4], nu, den, p;
    char text[30], sign;

    scanf("%d", &qt);

    for (i = 0; i < qt; i++){
        scanf(" %[^\n]s", text);

        values[0] = atoi(strtok(text, " "));
        strtok(NULL, " ");
        values[1] = atoi(strtok(NULL, " "));
        sign = strtok(NULL, " ")[0];
        values[2] = atoi(strtok(NULL, " "));
        strtok(NULL, " ");
        values[3] = atoi(strtok(NULL, " "));
    
        if (sign == '+' || sign == '-'){
            nu = values[0] * values[3] + (sign == '+' ? values[1] * values[2] : -values[1] * values[2]);
            den = values[1] * values[3];
        } else if (sign == '*'){
            nu = values[0] * values[2];
            den = values[1] * values[3];
        } else {
            nu = values[0] * values[3];
            den = values[2] * values[1];
        }

        if (nu >= den)
            p = mdc(abs(nu), abs(den));
        else
            p = mdc(abs(den), abs(nu));

        printf("%d/%d = %d/%d\n", nu, den, nu / p, den / p);
    }

    return 0;
}
