/**
  * rev_string - reverses a string
  * @s: function parameter
  *
  * Return: nothing
  */
void rev_string(char *s)
{
	int len, i, j;
	char *start, *end, tmp;

	end = s;
	start = s;
	j = 0;

	while (*s != '\0')
	{
		s++;
		j++;
	}
	len = j;

	for (i = 0; i < len - 1; i++)
	{
		end++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;

		start++;
		end--;
	}
}
