#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ib;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (ib = 0; ib < size; ib++)
	{
		if (cmp(array[ib]))
			return (ib);
	}
	return (-1);
}
