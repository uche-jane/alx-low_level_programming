#include <stdio.h>

int main() {
    int i, current, previous1 = 1, previous2 = 2;

    printf("%d, %d", previous1, previous2);

    for (i = 2; i < 98; i++) {
        current = previous1 + previous2;
        printf(", %d", current);

        previous1 = previous2;
        previous2 = current;
    }

    printf("\n");

    return 0;
}

