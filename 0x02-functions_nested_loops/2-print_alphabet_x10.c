`#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
    int i, j;
    char c;

    for (i = 0; i < 10; i++)
    {
        c = 'a';
        for (j = 0; j < 26; j++)
        {
            _putchar(c);
            c++;
        }
        _putchar('\n');
    }
}

