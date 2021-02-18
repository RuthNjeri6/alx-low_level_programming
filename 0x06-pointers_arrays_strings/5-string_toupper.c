/**
  * string_toupper - converts string to uppercase
  * @s: takes in char paramter
  *
  * Return: char pointer
  */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
