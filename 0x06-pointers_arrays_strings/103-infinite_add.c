#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0, sum = 0;

    // Check if the result can fit in the buffer
    if (len1 + len2 >= size_r)
        return 0;

    // Add digits starting from the least significant position
    int i = len1 - 1, j = len2 - 1, k = 0;
    while (i >= 0 || j >= 0)
    {
        int digit1 = (i >= 0) ? n1[i] - '0' : 0;
        int digit2 = (j >= 0) ? n2[j] - '0' : 0;
        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;
        r[k++] = sum + '0';
        i--;
        j--;
    }

    /* If there is a carry at the most significant position, add it to the result*/
    if (carry)
    {
        if (k < size_r - 1)
            r[k++] = carry + '0';
        else
            return 0;
    }

    /* Null-terminate the result and reverse it*/
    r[k] = '\0';
    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char tmp = r[i];
        r[i] = r[j];
        r[j] = tmp;
    }

    return r;
}

