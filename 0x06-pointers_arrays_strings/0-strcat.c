#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: The pointer to destination
 */

char* _strcat(char* dest, char* src)
{
    strcat(dest, src);
    return dest;
}
