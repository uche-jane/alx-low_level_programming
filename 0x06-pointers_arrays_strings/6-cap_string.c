#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *cap_string(char *str) {
  int i;
  char *result = malloc(strlen(str) + 1);
  char *word;
  const char *delim = " \t\n,;.!?\"(){}";
  
  strcpy(result, str);
  word = strtok(result, delim);
  
  while (word != NULL) {
    for (i = 0; word[i] != '\0'; i++) {
      word[i] = toupper(word[i]);
    }
    
    word = strtok(NULL, delim);
  }
  
  return result;
}
