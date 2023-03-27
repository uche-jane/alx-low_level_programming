#include <stdio.h>

int _atoi(char *s) {
    int sign = 1;
    int result = 0;

    while (*s != '\0') {
        if (*s == '-') {
            sign = -1;
        }
        else if (*s >= '0' && *s <= '9') {
            result = result * 10 + (*s - '0');
        }
        else if (*s == '+') {
            sign = 1;
        }
        else if (result != 0) {
            /* we've reached the end of the number, so break*/
            break;
        }

        ++s;
    }

    return result * sign;
}

