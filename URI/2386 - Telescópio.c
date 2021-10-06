#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {

    int opening, qt_star, i, star, qt_perc = 0;
    long long int mult = 0;

    scanf("%d %d", &opening, &qt_star);

    for (i = 0; i < qt_star; i++) {
        scanf("%d", &star);

        mult = star * opening;
        if (mult >= 40000000)
            qt_perc++;
    }

    printf("%d\n", qt_perc);

    return 0;
}
