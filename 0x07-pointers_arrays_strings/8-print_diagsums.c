#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size) 
{
    int i, j;
    int sum1 = 0, sum2 = 0;

    /* Calculate sum of elements in the first diagonal*/
    for (i = 0; i < size; i++) 
    {
        sum1 += *(a + i*size + i);
    }

    /* Calculate sum of elements in the second diagonal*/
    for (i = 0, j = size-1; i < size; i++, j--) 
    {
        sum2 += *(a + i*size + j);
    }

    /* Print the sums*/
    printf("Sum of first diagonal: %d\n", sum1);
    printf("Sum of second diagonal: %d\n", sum2);
}
