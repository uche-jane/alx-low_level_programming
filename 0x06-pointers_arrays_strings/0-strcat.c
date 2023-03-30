#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 *
 * @char *dest
 * @char *src
 *
 * Return: Always 0.
 */

char* _strcat(char* dest, char* src) 
{
    strcat(dest, src);
    return dest;
}
