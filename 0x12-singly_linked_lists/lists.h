#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * _strdup - A function that returns a pointer to a newly allocated space in
 * memory,which contains a copy of the string given as a parameter.
 * @str: string to be Allocated
 *
 * Return: Always 0 (success)
 */
char *_strdup(char *str)
{
	unsigned int i, c = 0;
	char *string;

	if (!str)
		return (NULL);
	while (str[c] != '\0')
	{
		c++;
	}
	string = (char *)malloc((c + 1) * sizeof(char));
	if (!string)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
		string[i] = str[i];

	string[i] = '\0';
	return (string);
}

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
char *_strdup(char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
