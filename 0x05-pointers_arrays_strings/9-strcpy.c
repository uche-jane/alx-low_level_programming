
#include "main.h"
/**
 *
 *char"_strcpy- a function that copies the string
 *pointed to by src
 *
 *
 *Return:string
 *
 */

char *strcpy(char *dest, const char *src) {
    char *p = dest;
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

