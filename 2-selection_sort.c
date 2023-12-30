#include "sort.h"

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
}
if ((array + i) != a)
{
_swap(array + i, a);
print_array(array, size);
}
i++;
}
}
