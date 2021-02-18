/**
  * _strncpy - copy strings
  * @dest: destitation
  * @src: source
  * @n: third parameter
  *
  * Return: pointer to char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		++len;
	}

	if (len >= n)
	{
		for (i = 0; i < n; ++i)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; src[i] != '\0'; ++i)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
	}
	return (dest);
}
