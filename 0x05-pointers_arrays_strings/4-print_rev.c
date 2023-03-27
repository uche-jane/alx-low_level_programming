#include "main.h"
/**
 *
 *a function that prints a string, in reverse,
 *followed by a new  line
 *
 *
 *
 */

void print_rev(char *s) {
    char len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    char n;
    for ( n = len; n > 0; n--) {
        putchar(s[n-1]);
    }
    putchar('\n');
}
