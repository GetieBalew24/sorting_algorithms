#include "sort.h"
/**
  * selection_sort - Sort an array of integers in ascending order
  *                  using the selection sort algorithm.
  * @array: array to sort
  * @size: size of array
  * Description: Prints the array after each swap.
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int smallest, tmp, idx;

	for (i = 0; i < size; i++)
	{
		smallest = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (smallest > array[j])
			{
				smallest = array[j];
				idx = j;
			}
		}
		if (smallest != array[i])
		{
			tmp = array[i];
			array[i] = smallest;
			array[idx] = tmp;
			print_array(array, size);
		}
	}
}
