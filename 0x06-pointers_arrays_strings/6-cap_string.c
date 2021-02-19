/**
  * cap_string - capitilizes words in a string
  * @s: pointer to char parameter
  *
  * Return: pointer to char
  */
char *cap_string(char *s)
{
	int i, j;
	static const char arr[] = ",;.?!\"(){}\t\v\n ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if ((s[i - 1] == arr[j]) && (s[i] <= 'z') && (s[i] >= 'a'))
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
