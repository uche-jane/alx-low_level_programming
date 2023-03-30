#include <stdio.h>

/**
 * reverse_array -reveses an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int* a, int n) 
{
    int i, j, temp;
    for (i = 0, j = n - 1; i < j; i++, j--) 
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverse_array(arr, n);

    printf("Reversed array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

