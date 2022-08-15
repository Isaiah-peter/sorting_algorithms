#include "sort.h"

/**
 * selection_sort - sort an array
 * @array: first param
 * @size: second param
 * @Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, c;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1, c = i + 1; j < size; j++)
		{
			if (array[j] < array[c])
			{
				c = j;
			}
		}

		if (array[i] > array[c])
		{
			temp = array[i];
			array[i] = array[c];
			array[c] = temp;
			print_array(array, size);
		}
	}
}
