#include <stdio.h>

int main() {
    int a = 1, b = 2, temp, sum_even = 0;

    while (b <= 4000000) {
        if (b % 2 == 0) {
            sum_even += b;
        }
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("%d\n", sum_even);

    return 0;
}

