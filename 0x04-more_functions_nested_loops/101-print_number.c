#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	unsigned int n1;
    if (n < 0)
    {
        _putchar('-');
        n1 = -n;
    }
    else
    {
	    n1 = n;
    if (n / 10)
    {
        print_number(n / 10);
    }

    _putchar((n1 % 10) + '0');
}

