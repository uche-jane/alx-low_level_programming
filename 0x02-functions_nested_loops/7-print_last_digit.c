#include <stdio.h>

int print_last_digit(int num)
{
    int last_digit = num % 10;
    printf("%d\n", last_digit);
    return last_digit;
}
