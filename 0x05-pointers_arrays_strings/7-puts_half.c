#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 *puts_half - function prints hald a string
 *
 *@str:input
 *
 *Return:half of input}
*
*/

void puts_half(char *str) {
    int length = strlen(str);
    int start = (length + 1) / 2;
    printf("%s\n", str + start);
}
