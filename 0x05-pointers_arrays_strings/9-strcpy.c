#include "main.h"
#include <string.h>

#include <stdlib.h>
/**
 *
 *char *_strcpy
 *
 *@*dest
 *@*src
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
    char *p = dest;
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}




