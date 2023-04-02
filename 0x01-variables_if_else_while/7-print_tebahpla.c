#include <stdio.h>
/**
 * main - Entry point
 * Description: the program's description
 * parameter: describe the parameter
 * Return: Always 0 (Success)
 */

int main(void)
{
    char c = 'z';

    while (c >= 'a')
    {
        putchar(c);
        c--;
    }

    putchar('\n');
    return 0;
}

