#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *p;
	int i;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	p = strdup(str);
	if (p == NULL)
	{
		free(n);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	n->str = p;
	n->len = i;
	n->next = *head;

	*head = n;

	return (n);
}
