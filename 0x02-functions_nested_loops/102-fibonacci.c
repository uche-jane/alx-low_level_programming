#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program generates the first 50 Fibonacci numbers starting with 1 and 2.
 *        The numbers are separated by a comma followed by a space
 *
 * Return: Always 0 (success)
 */

int main() 
{
    int fib[50];
    fib[0] = 1;
    fib[1] = 2;

    printf("%d, %d, ", fib[0], fib[1]);

    for (int i = 2; i < 50; i++) 
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d, ", fib[i]);
    }

    printf("\n");

    return (0);
}
