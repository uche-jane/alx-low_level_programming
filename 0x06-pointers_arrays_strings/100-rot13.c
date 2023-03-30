#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rot13(char *str) {
  int i;
  char *result = malloc(strlen(str) + 1);
  
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      result[i] = ((str[i] - 'A' + 13) % 26) + 'A';
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      result[i] = ((str[i] - 'a' + 13) % 26) + 'a';
    } else {
      result[i] = str[i];
    }
  }
  
  result[i] = '\0';
  return result;
}



