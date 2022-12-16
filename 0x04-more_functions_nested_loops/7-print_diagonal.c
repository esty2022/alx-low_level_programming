#include "main.h"

/**
*print_diagonal - prints
*@n: times
*Return: no return
*/
void print_diagonal(int n)
{
	int i = 0, j, a, b;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(a = n + i,b = n + j);
			a++;
		}
		_putchar('\\');
		_putchar('\n');
		b++;
	}
	if (i == 0)
		_putchar("\n");
}
