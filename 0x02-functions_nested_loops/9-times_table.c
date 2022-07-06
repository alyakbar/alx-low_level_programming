#include "main.h"
/**
* times_table - Times table
* Return: 0
*/
void times_table(void)
{
	int i;
	int j;
	int k = 9;

	for (i = 0; i <= k; i++)
	{
		for (j = 0; j <= k; j++)
		{
			if ((i * j) < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((j * i) + '0');
			}
			else if ((i * j) < 100)
			{
				_putchar(' ');
				_putchar((((j * i) / 10) % 10) + '0');
				_putchar(((j * i) % 10) + '0');
			}
			if (j != k)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
