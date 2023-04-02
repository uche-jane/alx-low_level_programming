#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program generates the first 50 Fibonacci numbers starting with 1 and 2.
 *        The numbers are separated by a comma followed by a space
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    int a = 1, b = 2, temp;
    int count = 0;

    printf("%d, %d", a, b);
    count = 2;

    while (count < 50)
    {
        temp = a + b;
        printf(", %d", temp);
        a = b;
        b = temp;
        count++;
    }

    printf("\n");

    return (0);
}
