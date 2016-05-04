#include <limits.h>
int print_char(char c);

void print_diagonal(int n) {
  int i;
  int row;
  
  i = 1;
  row = 0;
  
  if (n <= 0) {
    print_char('\n');
    row++;
  }
  
  while (row < n) {
    row++;

    /*print spaces*/
    if (row > 1) {
      i = 1;
      while (i < row) {
	print_char(' ');
	i++;
      }
    }

    /*print slash*/
    print_char('\\');

    /*print new line*/
    print_char('\n');
  }
}

