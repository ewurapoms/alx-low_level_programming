#include "hash_tables.h"

void hash_print_list(const hash_node_t *head);
void hash_table_commas(void);

/**
 * hash_table_print - print the elements in a hash table
 * @ht: a pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	void (*print_sep)() = NULL;
	hash_node_t **array = NULL;
	unsigned long int i = 0;
	unsigned long int size = 0;

	if (ht)
	{
		putchar('{');
		for (array = ht->array, size = ht->size; i < size; ++i)
		{
			if (array[i])
			{
				if (print_sep)
					print_sep();
				else
					print_sep = hash_table_commas;

				hash_print_list(array[i]);
			}
		}
		puts("}");
	}
}

/**
 * hash_table_commas - prints a separator between elements in a hash table
 *
 */
void hash_table_commas(void)
{
	fputs(", ", stdout);
}

/**
 * hash_print_list - prints the elements in a singly-linked list
 * @head: a pointer to the singly-linked list
 */
void hash_print_list(const hash_node_t *head)
{
	for (;;)
	{
		if (head->value)
			printf("'%s': '%s'", head->key, head->value);
		else
			printf("'%s': %s", head->key, head->value);

		head = head->next;

		if (head)
			hash_table_commas();
		else
			return;
	}
}
