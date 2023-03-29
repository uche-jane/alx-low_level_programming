#include "main.h"
#include <unistd.h>

/**
 * _putchar writes the character to standout
 * @c: The character to print
 *
 * Return: on success is 1
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
 
