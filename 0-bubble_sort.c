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

/**
 * bubble_sort - Function for Sorting an array of integers in ascending order.
 * @array: The array of integers to be sorted.
 * @size: The size of the array to be sorted.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapInts(array + j, array + j + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
