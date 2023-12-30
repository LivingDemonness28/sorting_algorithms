#include "sort.h"

/**
 * bubble_sort - sort array of ints in ascending order.
 * @array: array of ints.
 * @size: array size.
 * Returns: print array after each swap.
*/
void bubble_sort(int *array, size_t size)
{
size_t i, length = size;
boolean bubbly = false;

if (array == NULL || size < 2)
return;

for (; bubbly == false; length--)
{
bubbly = true;
for (i = 0; i < length - 1; i++)
{
if (array[i] > array[i + 1])
{
_swap(array + i, array + i + 1);
print_array(array, size);
bubbly = false;
}
}
}
}
