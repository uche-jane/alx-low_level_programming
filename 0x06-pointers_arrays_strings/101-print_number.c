#include <stdio.h>
/**
 * print_number(int n) - prints an integer
 *
 *
 * Return: Always 0.
 */

void print_number(int n) {
    if (n < 0) { /* handle negative numbers*/
        _putchar('-');
        n = -n;
    }
    if (n/10) { /* recursively divide the number by 10 until we get a single digit*/
        print_number(n/10);
    }
    _putchar((n%10) + '0'); /* print the last digit*/
}


