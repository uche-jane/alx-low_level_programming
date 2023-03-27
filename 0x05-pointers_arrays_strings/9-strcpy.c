#include "main.h"

char*_strcpy(char*dest, char*src) 
{
    char src[] = "hello world";
    char dest[20];
    char *result = copy_string(dest, src);
    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);
    printf("Return value: %s\n", result);
    return 0;
}


