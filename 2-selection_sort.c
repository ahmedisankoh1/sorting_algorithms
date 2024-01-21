#include "sort.h"

/**
 * swapInts - Functions that Swaps two integers in an array.
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

/**
 * selection_sort - A function that Sorts an array of integers in 
 *                  ascending order using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *mini;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		mini = array + i;
		for (j = i + 1; j < size; j++)
			mini = (array[j] < *mini) ? (array + j) : mini;

		if ((array + i) != mini)
		{
			swapInts(array + i, mini);
			print_array(array, size);
		}
	}
}
