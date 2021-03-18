#ifndef _LISTS_H_
#define _LISTS_H_
/**
  * struct list_s - singly linked list
  * @str: pointer to string
  * @len: length of list
  * @next: ponter to next node
  *
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int print_list(const list_t *h);
int _strlen(const char *str);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* _LISTS_H_ */
