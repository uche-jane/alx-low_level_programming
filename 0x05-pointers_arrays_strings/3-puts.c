#include "main.h"
/**
 *
 *A function that prints a string, followed by a new line
 *
 *@string to print
 *
 *
 */

void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}
