#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible combination  of two-digits
 * parameter: describe the parameter
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j;

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            putchar(i + '0');
            putchar(j + '0');

            if (i != 8 || j != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
