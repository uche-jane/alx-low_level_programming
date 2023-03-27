#include "main.h"
#include <stdio.h>
/**
 *
 *puts2 - function should print only one character
 *out of two
 *stating with the first line
 *
 *Return:print
 *
 */

void puts2(char *str) {
    int i;
    
    for (i = 0; str[i] != '\0'; i += 2) {
        printf("%c", str[i]);
    }
    
    printf("\n");
}
