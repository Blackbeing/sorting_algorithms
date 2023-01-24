#include "sort.h"

/**
 * selection_sort - Sort array using selection sort algorithm
 * @array: Pointer to array of ints
 * @size: Size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	size_t smallest_idx = 0;
	size_t temp = 0;

	if (size < 2 || !array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		smallest_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[smallest_idx])
				smallest_idx = j;
		}
		if (smallest_idx != i)
		{
			temp = array[i];
			array[i] = array[smallest_idx];
			array[smallest_idx] = temp;
			print_array(array, size);
		}
	}
}
