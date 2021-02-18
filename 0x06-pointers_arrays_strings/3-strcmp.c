/**
  * _strcmp - compares two strings
  * @s1: first parameter
  * @s2: second parameter
  *
  * Return: 0, integer > 0, integer < 0
  */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;

	while ((s1[i] == s2[i]) && s1[i] != '\0')
		i++;
	if (s1[i] > s2[i])
		result = s1[i] - s2[i];
	else if (s1[i] < s2[i])
		result = s1[i] - s2[i];
	else
		result = 0;
	return (result);
}
