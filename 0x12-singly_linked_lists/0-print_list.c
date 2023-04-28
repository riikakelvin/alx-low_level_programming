#include <stdio.h>
#include "lists.h"
/**
 * size_t print_list - prints all the elements of a linked list, list_t list
 * @h: contains a singly linked list
 *
 * Return: elements in a list (number of)
 */
size_t print_list(const list_t *h)
{
	size_t k;
	k = 0;

	 while (h)
	 {
		 if (!h->str)
		 {
			 printf("[0] (nil)\n");
		 }
		 else
		 {
			 printf("[%u] %s\n", h->len, h->str);
		 	h = h->next;
		 	k++;
		 }
	 }
 return (k);
}
