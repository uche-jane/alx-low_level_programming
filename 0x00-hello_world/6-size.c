#include <stdio.h>
/**
 * main -Entry point
 *
 * Return :Always 0 (success)
 */
int main(void)
{
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of long a int %d byte(s)\n",sizeof(long int));
printf("size of a long long int %d byte(s)\n",sizeof(long long int));
printf("size of a float %d byte(s)\n",sizeof(float));
printf("The size of double is %d bytes\n", sizeof(double));
printf("The size of long double is %d bytes\n", sizeof(long double));
return (0);
}	


