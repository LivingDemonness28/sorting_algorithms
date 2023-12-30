#include "sort.h"

/**
 * _swapn - swap 2 nodes.
 * @head: ptr to head of doubly linked list
 * @node_1: ptr to first node
 * @node_2: second node
 * Returns: Nothing
*/
void _swapn(listint_t **head, listint_t **node_1, listint_t *node_2)
{
(*node_1)->next = node_2->next;
if (node_2->next)
node_2->next->prev = *node_1;
node_2->prev = (*node_1)->prev;
node_2->next = *node_1;
if ((*node_1)->prev)
(*node_1)->prev->next = node_2;
else
*head = node_2;
(*node_1)->prev = node_2;
*node_1 = node_2->prev;
}

/**
 * insertion_sort_list - sorts doubly linked
 * list of ints.
 * @list: ptr to head of list.
 * Returns: Nothing.
*/
void insertion_sort_list(listint_t **list)
{
listint_t *count, *ins, *hold;

if (!list || !(*list) || !((*list)->next))
return;

count = (*list)->next;
while (count)
{
hold = count->next;
ins = count->prev;
while (ins && count->n < ins->n)
{
_swapn(list, &ins, count);
print_list((const listint_t *)*list);
}
count = hold;
}
}
