#include "main.h"
#include <stdio.h>

/**
 *function that checks for uppercase character.
 */

int main(void)
{
  char c;

  c = 'A';
  printf("%c: %d\n", c, _isupper(c));
  c = 'a';
  printf("%c: %d\n", c, _isupper(c));
  return (0);
}
