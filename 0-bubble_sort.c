#include "sort.h"
#include "swap_ints.c"

/**
 * bubble_sort -  sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: array of elements to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size; 
	bool bubbly = false; 

	if (array == NULL || size < 2)
		return;
	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}

}
