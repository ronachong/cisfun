#include <stdio.h>
#include <stdlib.h>

int find_length(char *);
void copy_values(char *string_to_copy, char *string_to_copy_to, int start_index);

char *string_concat(char *s1, char *s2) {
  char *concatd_string;
  int length_s1;
  int length_s2;

  length_s1 = find_length(s1);
  length_s2 = find_length(s2);

  /* allocate memory for concatd strings based on lengths of inputs */
  concatd_string = malloc(sizeof(char)*(length_s1 + length_s2));
  if (concatd_string == NULL) {
    printf("concatd_string is null.\n");
    return NULL;
  }

  /* copy values of input strings into concatd_string */
  copy_values(s1, concatd_string, 0);
  copy_values(s2, concatd_string, length_s1);
  
  return concatd_string;
}

int find_length(char *s) {
  int i;
  
  /* loop through string and increment up for every char till end of string */
  i = 0;
  while (s[i] != '\0') {
    i++;
  }
  
  return i;
}

void copy_values(char *s, char *concatd_string, int start_index) {
  int i;

  i = 0;

  /* loop through string s and copy values over to concatd_string */
  while (s[i] != '\0') {
    concatd_string[start_index + i] = s[i];
    i++;
  }
  return;
}
