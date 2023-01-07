#include "main.h"

/**
*_abs - computes the absolute value
*@d: the integer
*Return: The absolute value*
*/
int _abs(int d)
{
	if (d < 0)
	{
		int c;

		c = d * -1;

		return (c);
	}

		return (d);
}
