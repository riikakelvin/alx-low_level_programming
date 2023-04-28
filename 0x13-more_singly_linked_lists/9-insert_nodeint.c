#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node on list
 * @ind: index of the position of the new node
 * @n: n: data to insert in the new node
 * Return: pointer to the new node, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int ind, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (ind == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < ind; i++)
	{
		if (i == ind - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
