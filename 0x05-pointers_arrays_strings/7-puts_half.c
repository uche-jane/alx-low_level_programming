#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str) 
{
    int length = strlen(str);
    int start = (length + 1) / 2;
    printf("%s\n", str + start);
}
