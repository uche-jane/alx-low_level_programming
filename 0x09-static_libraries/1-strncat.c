#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)	
{

    char *p = dest + strlen(dest);
    while (*src && n--)	
    {
        *p++ = *src++;
    }
    *p = '\0';
    return (dest);
}
