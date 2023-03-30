#include <stdio.h>
#include <ctype.h>
#include <string.h>

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

