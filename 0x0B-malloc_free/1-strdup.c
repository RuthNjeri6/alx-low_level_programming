#include <stdlib.h>
/**
  * _strdup - allocate space to a new string and duplicates it
  * @str: pointer to original string
  *
  * Return: pointer to duplicate string
  */
char *_strdup(char *str)
{
	int len, i;
	static char *s;
	char *dup;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	dup = s;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (s);
}
