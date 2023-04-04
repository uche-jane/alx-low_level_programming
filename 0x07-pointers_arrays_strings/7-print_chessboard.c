#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8]) 
{
    int i, j;

    /* Iterate over the rows of the chessboard*/
    for (i = 0; i < 8; i++) {
        /* Iterate over the columns of the chessboard*/
        for (j = 0; j < 8; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
}
