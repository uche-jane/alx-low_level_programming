#include "print_array.h"
#include <stdio.h>

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    print_array(a, sizeof(a) / sizeof(int));
    return 0;
}
