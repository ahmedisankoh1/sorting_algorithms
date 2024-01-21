#include "sort.h"

/**
 * swapInts - Swaps two integers whithin an array.
 * @a: The first integer to be swaped.
 * @b: The second integer to be swaped.
 */
void swapInts(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
