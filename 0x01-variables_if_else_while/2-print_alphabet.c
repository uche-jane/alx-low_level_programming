#include <stdio.h>

/**
 * main - Entry point
 * Description: the program's description
 * parameter: describe the parameter
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
