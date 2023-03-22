#include <stdio.h>

int main() {
    int a = 1, b = 2, temp;
    int count = 0;

    printf("%d, %d", a, b);
    count = 2;

    while (count < 50) {
        temp = a + b;
        printf(", %d", temp);
        a = b;
        b = temp;
        count++;
    }

    printf("\n");

    return 0;
}

