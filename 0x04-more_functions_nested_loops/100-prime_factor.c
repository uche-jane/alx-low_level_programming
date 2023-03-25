#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
    long int n = 612852475143;
    long int i;

    for (i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            n /= i;
        }
    }

    if (n > 1)
    {
        printf("%ld\n", n);
    }
    else
    {
        printf("%ld\n", i - 1);
    }

    return 0;
}

