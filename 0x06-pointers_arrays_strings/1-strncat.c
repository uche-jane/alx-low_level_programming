#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest:destination string
 * @src:source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char* _strncat(char* dest, char* src, int n) 
{
    int dest_len = strlen(dest);
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) 
    {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return dest;
}
