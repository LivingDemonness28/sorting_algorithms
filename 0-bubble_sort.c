#include "sort.h"

/**
 * _swap - swap two ints in an array.
 * @int_1: first int.
 * @int_2: second int.
 * Returns: Nothing.
*/
void _swap(int *int_1, int *int_2)
{
int hold;

hold = *int_1;
*int_1 = *int_2;
*int_2 = hold;
}

/**
 * bubble_sort - sort array of ints in ascending order.
 * @array: array of ints.
 * @size: array size.
 * Returns: print array after each swap.
*/
void bubble_sort(int *array, size_t size)
{
size_t i, length = size;
enum boolean bubbly = false;

if (!array || size < 2)
return;

for (; bubbly == false; length--)
{
bubbly = true;
for (i = 0; i < length; i++)
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
