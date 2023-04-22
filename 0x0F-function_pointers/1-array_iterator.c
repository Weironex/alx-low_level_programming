#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *			on each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 *
 * Retrun: Always 0.
 */
 
 void array_iterator(int *array, size_t size, void (*action)(int))
{
	int size_t;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
