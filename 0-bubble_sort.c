#include "sort.h"

/**
 * bubble_sort - use bubble sort algorith to sort array
 * @array: Pointer to array of ints
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int swap = 0;
	int swap_flag = 0;

	if (size < 2 || !array)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				print_array(array, size);
				swap_flag = 1;
			}
		}
		if (swap_flag == 0)
			return;
	}
}

