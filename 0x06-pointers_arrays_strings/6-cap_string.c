#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* cap_string(char* str) {
    /* Allocate memory for the capitalized string*/
    char* capitalized_str = (char*)malloc(strlen(str) + 1);
    if (capitalized_str == NULL) {
        perror("Error: ");
        exit(EXIT_FAILURE);
    }
    
    /* Set the initial state of the capitalization flag*/
    int capitalize_next = 1; // Capitalize the first word
    
 /* through each character in the string and capitalize words as needed*/
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (isspace(c) || c == ',' || c == ';' || c == '.' || c == '!' || c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}') {
            /* The current character is a word separator, so set the capitalization flag for the next word*/
            capitalize_next = 1;
            capitalized_str[i] = c; // Pass through the separator character unchanged
        } else {
            if (capitalize_next) {
                /* Capitalize the current character and clear the capitalization flag*/
                capitalized_str[i] = toupper(c);
                capitalize_next = 0;
            } else {
                capitalized_str[i] = c; // Pass through non-separator characters unchanged
            }
        }
    }
    
    /* Add null terminator to the end of the capitalized string*/
    capitalized_str[strlen(str)] = '\0';
    
    return capitalized_str;
}

