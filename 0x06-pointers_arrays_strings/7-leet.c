#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* leet(char* str) {
    /* Allocate memory for the encoded string*/
    char* encoded_str = (char*)malloc(strlen(str) + 1);
    if (encoded_str == NULL) {
        perror("Error: ");
        exit(EXIT_FAILURE);
    }
    
    /* Define the mapping of characters to their 1337 equivalents*/
    const char* mapping = "AAA4EEE3OOO0TTT7LLL1";
    
    /* Iterate through each character in the string*/
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        /* Use the mapping to encode the character if it is a, e, o, t, or l*/
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'o' || c == 'O' || c == 't' || c == 'T' || c == 'l' || c == 'L') {
            for (int j = 0; j < strlen(mapping); j += 2) {
                if (mapping[j] == c) {
                    encoded_str[i] = mapping[j+1];
                    break;
                }
            }
        } else {
            /* Pass through any other characters unchanged*/
            encoded_str[i] = c;
        }
    }
    
    /* Add null terminator to the end of the encoded string*/
    encoded_str[strlen(str)] = '\0';
    
    return encoded_str;
}

