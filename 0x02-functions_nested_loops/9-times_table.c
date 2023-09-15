#include "main.h"

/**
 * times_table - prints the 9 times tables, starting with 0
 */
void times_table(void)
{
	int i, j,k;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k= j * i;
			if (j == 0)
			{
				_putchar(K + '0');
			}

			if (K < 10 && j != 0)
			{
				_putchsr(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(K + '0');
			} else if ( K >= 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((K /10) + '0');
				_putchar((K % '10');
			}
                  }
		   _putchar('\n');
	
          }
}


