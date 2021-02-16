/**
  * _strlen - returns the length of tring
  * @s: one argument
  *
  * Return: int length
  */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
