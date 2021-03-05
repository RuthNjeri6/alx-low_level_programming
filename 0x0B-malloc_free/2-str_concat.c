#include <stdlib.h>
/**
  * str_concat - concatenates two strings
  * @s1: first parameter
  * @s2: second parameter
  *
  * Return: pointer to character
  */
char *str_concat(char *s1, char *s2)
{
	static char *ptr;
	char *cat;
	int len1, len2, i, j;

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr =(char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	cat = ptr;
	i = 0;
	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}
	j = 0;
	for (i = len1; s2[j] != '\0'; i++)
	{
		cat[i] = s2[j];
		j++;
	}
	cat[i] = '\0';
	return (ptr);
}
