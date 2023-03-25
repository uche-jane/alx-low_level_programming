#include <stdio.h>

/**
 * main - entry point, prints numbers 1-100, replaces multiples of 3 and/or 5 with Fizz/Buzz/FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz ");
        else if (i % 3 == 0)
            printf("Fizz ");
        else if (i % 5 == 0)
            printf("Buzz ");
        else
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}

