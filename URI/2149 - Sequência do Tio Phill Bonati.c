#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {

    long long int arr[20] = {0, 1};
    int value = 0, arr_len = 0;

    for (arr_len = 2; arr_len < 20; arr_len += 2) {
        arr[arr_len] = arr[arr_len - 1] + arr[arr_len - 2];
        arr[arr_len + 1] = arr[arr_len] * arr[arr_len - 1];
    }

    while (scanf("%d", &value) != EOF)
        printf("%lld\n", arr[value - 1]);
    
    return 0;
}
