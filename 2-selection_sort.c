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
 * selection_sort - sort array of ints in asc order
 * @array: int array
 * @size: array size
 * Returns: Nothing
*/
void selection_sort(int *array, size_t size)
{
int *a;
size_t i = 0, j;

if (!array || size < 2)
return;

while (i < size)
{
a = array + i;
j = i + 1;
while (j < size)
{
a = (array[j] < *a) ? (array + j) : a;
j++;
}
if ((array + i) != a)
{
_swap(array + i, a);
print_array(array, size);
}
i++;
}
}
