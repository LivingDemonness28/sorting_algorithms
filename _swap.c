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
