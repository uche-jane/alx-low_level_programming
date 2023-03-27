#include "main.h"
/**
 *
 *a function that prints a string, in reverse,
 *followed by a new  line
 *
 *
 *
 */

void print_rev(char *s)
{
    int len = 0;
    while (*s != '\0') 
    {
        len++;
        s++;
    }
    for (int n = len; n > 0; n--)
    {
        putchar(*s);
	s--;
    }
    putchar('\n');
}
