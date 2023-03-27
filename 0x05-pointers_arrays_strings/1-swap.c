#include "main.h"
/**
 *
 *a function that swaps the values of two integers.
 *
 *Return : n
 *
 */

void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
