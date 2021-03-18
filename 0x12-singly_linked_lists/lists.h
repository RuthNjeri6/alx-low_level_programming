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

#endif /* _LISTS_H_ */
