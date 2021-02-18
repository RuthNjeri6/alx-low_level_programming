/**
  * _strncat - concates string one with n bytes of string two
  * @dest: first aregument
  * @src: second argument
  * @n: third argument
  *
  * Return: pointer to character
  */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i, len_src;

	len_dest = 0;
	len_src = 0;

	while (dest[len_dest] != '\0')
	{
		++len_dest;
	}
	while (src[len_src] != '\0')
	{
		++len_src;
	}

	if (len_src >= n)
	{
		for (i = 0; i < n; ++i, ++len_dest)
		{
			dest[len_dest] = src[i];
		}
	}
	else
	{
		for (i = 0; src[i] != '\0'; ++i, ++len_dest)
		{
			dest[len_dest] = src[i];
		}
		dest[len_dest] = '\0';
	}
	return (dest);
}
