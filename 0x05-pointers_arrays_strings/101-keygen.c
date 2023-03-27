#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 6

int main(void)
{
    char password[PASSWORD_LEN + 1]; // +1 for null terminator
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charset_len = sizeof(charset) - 1;

    srand(time(NULL)); /* initialize random number generator with current time*/

    for (int i = 0; i < PASSWORD_LEN; i++) {
        password[i] = charset[rand() % charset_len];
    }

    password[PASSWORD_LEN] = '\0'; /* add null terminator*/

    printf("%s\n", password);

    return 0;
}

