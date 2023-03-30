#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * @char* str
 *string_toupper - changes all lowercase letters of a string to uppercase.
 * Return: Always 0.
 */
char* string_toupper(char* str) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (islower(str[i])) 
	{
            str[i] = toupper(str[i]);
        }
        i++;
    }
    return str;
}

