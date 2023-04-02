#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */



int main(void) {
    int a[] = {99, 98, 97};
    int *p;
    p = &a[0];

    /* Add the following line*/
    printf("a[2] = %d\n", *(p + 2));

   /** printf("a[0] = %d\n", *p);
   * printf("a[1] = %d\n", *(p + 1));
   */ printf("a[2] = %d\n", *(p + 2));

    return 0;
}


