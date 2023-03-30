#include <stdio.h>
#include <string.h>

/**
 * *infinite_add - adds two numbers that are represented as strings in the character arrays "n1" and "n2"
 * @char *n1
 * @char *n2
 *
 * Return: Always 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int sum, i, j;
    
    /* Check if result can be stored in r*/
    if (len1 + len2 >= size_r)
        return 0;
    
    /* Add digits from right to left*/
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--) 
    {
	sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';
        if (sum > 9) 
	{
            carry = 1;
            sum -= 10;
        } else 
	{
            carry = 0;
        }
        r[len1 + len2 - i - j - 2] = sum + '0';
    }
    
    /* Add last carry if necessary*/
    if (carry) {
        if (len1 + len2 >= size_r)
            return 0;
        r[len1 + len2 - i - j - 2] = carry + '0';
    }
    
    /* Reverse result string*/
    for (i = 0, j = len1 + len2 - 2; i < j; i++, j--) 
    {
        char tmp = r[i];
        r[i] = r[j];
        r[j] = tmp;
    }
    
    return r;
}


