#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a linked list, list_t list
 * @h: contains a singly linked list
 * Return: nodes printed (number of)
 */
size_t print_list(const list_t *h)
{
	size_t s;

	s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nill)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			s++;
		}
	}
	return (s);
}
