#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main()
{
    int total = 0;
    int i;

    for (i = 1; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
	{
            total += i;
        }
    }

    printf("%d\n", total);

    return (0);
}

