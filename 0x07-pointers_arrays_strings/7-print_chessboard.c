#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints the chessboard
 * @a: 2d array of chars
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8]) 
{
    int i, j;

    /* Iterate over the rows of the chessboard*/
    for (i = 0; i < 8; i++)
    {
        /* Iterate over the columns of the chessboard*/
        for (j = 0; j < 8; j++)
	{
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
}
