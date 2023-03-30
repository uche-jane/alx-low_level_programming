#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer prints the content in the character array up to the specified size
 * @char *b
 * 
 *
 * Return: Always 0.
 */

void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        /* print position of first byte in line*/
        printf("%08x: ", i);

        /* print hex content of buffer, 2 bytes at a time*/
        for (j = i; j < i + 10; j += 2)
        {
            if (j < size)
                printf("%02x", b[j]);
            else
                printf("  ");

            if (j + 1 < size)
                printf("%02x ", b[j + 1]);
            else
                printf("   ");
        }

        /* print content of buffer, replacing non-printable characters with dots*/
        printf(" ");
        for (j = i; j < i + 10 && j < size; j++)
        {
            if (isprint(b[j]))
                printf("%c", b[j]);
            else
                printf(".");
        }

        printf("\n");
    }
}

