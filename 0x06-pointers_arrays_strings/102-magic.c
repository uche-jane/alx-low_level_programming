#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main() 
{
    int a[] = {87, 92, 98, 120, 77, 82};
    int* p = a;

    printf("a[2] = %d\n", *(p+2)); /* added line*/
    
    return 0;
}

