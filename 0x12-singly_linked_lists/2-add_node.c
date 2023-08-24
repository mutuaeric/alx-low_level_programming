#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the linked list
 * @head: double pointer
 * @str: new string 
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int l = 0;

	while (str[l])
		l++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->l = l;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
