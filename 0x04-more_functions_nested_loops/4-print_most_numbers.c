#include "main.h"

void print_most_numbers(void)
{
  int i;

  for(i = 1; i <= 10; i++)
    {
      if(i == 2 && i == 4)
	{
	 continue;
	}
      _putchar(i);
    }
      _putchar('\n');
    
}
