#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)	
{	
    char *p = dest + strlen(dest);
    while (*src)	
    {
        *p++ = *src++;
    }
    *p = '\0';
    return (dest);	
}
