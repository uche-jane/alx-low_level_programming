#include <stdio.h>

void print_alphabet_10_times(void) {
    int i, j;
    char c;

    for (i = 0; i < 10; i++) {
        c = 'a';

        while (c <= 'z') {
            _putchar(c);
            c++;
        }
        _putchar('\n');
    }
}
