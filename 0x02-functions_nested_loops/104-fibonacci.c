#include <stdio.h>

/**
 * Description: This program finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    int i, a = 1, b = 2, c;

    printf("%d, %d", a, b);

    for (i = 3; i <= 98; i++)
    {
        c = a + b;
        a = b;
        b = c;

        printf(", %d", c);
    }

    printf("\n");

    return 0;
}
