#include "main.h"

/**
*swap int -swaps the values of two integers
*@n: int a
*@b: int b
*/
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
