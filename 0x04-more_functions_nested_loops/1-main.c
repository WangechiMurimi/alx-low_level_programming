#include "main.h"
#include <stdio.h>

/**
 *function that checks for a digit (0 through 9).
 */

int main(void)
{
  char c;

  c = '0';
  printf("%c: %d\n", c, _isdigit(c));
  c = 'a';
  printf("%c: %d\n", c, _isdigit(c));
  return (0);
}
