#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *rot13 - encodes string using rot13
 *
 * Return: Always 0.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* rot13(char* str) {
    /* Allocate memory for the encoded string*/
    char* encoded_str = (char*)malloc(strlen(str) + 1);
    if (encoded_str == NULL) {
        perror("Error: ");
        exit(EXIT_FAILURE);
    }
    
    /* Iterate through each character in the string*/
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            /* Rotate lowercase letters by 13 positions*/
            encoded_str[i] = ((c - 'a' + 13) % 26) + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            /* Rotate uppercase letters by 13 positions*/
            encoded_str[i] = ((c - 'A' + 13) % 26) + 'A';
        } else {
            /* Pass through any non-letter characters unchanged*/
            encoded_str[i] = c;
        }
    }
    
    /* Add null terminator to the end of the encoded string*/
    encoded_str[strlen(str)] = '\0';
    
    return encoded_str;
}

