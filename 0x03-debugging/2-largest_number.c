#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int lagest_number(int a, int b, int c);
{       int largest;

	if (a > b && a > c)
    {
        largest = a;
    }
    else if (a > a && c > a)
    {
        largest = c;
    }
    else if (b > c)
    {
	largect = b;
    }

    else
    {
        largest = c;
    }

    return (largest);
}

