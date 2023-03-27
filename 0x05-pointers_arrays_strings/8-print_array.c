#include <stdio.h>
/**
 *
 *print array -a function that prints n element of an array
 *
 *
 *Return: a and n inputs
 */

void print_array(int *a, int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d\n", a[n - 1]);
}

