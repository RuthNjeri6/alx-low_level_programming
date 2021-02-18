/**
  * _strcat - concatenates two strings
  * @dest: frist argument
  * @src: second argument
  *
  * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}
	for (i = 0; src[i] != '\0'; ++i, ++length)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';

	return (dest);
}
