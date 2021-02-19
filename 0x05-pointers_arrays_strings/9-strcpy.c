/**
  * _strcpy - copy string from source to destination
  * @dest: first argument
  * @src: second argument
  *
  * Return: A character pointer
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
