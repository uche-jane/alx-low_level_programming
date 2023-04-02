#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The argument integer
 * Return: the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}

