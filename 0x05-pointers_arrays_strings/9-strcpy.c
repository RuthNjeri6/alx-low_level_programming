/**
  * _strcpy - copy string from source to destination
  * @dest: first argument
  * @src: second argument
  *
  * Return: A character pointer
  */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
