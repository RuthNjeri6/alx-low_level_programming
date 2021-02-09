/**
  * _isalpha - checks for alphabets
  * @c: takes the argument c
  *
  * Return: integer
  */
int _isalpha(int c)
{
	int result;

	if (c >= 'A' && c <= 'z')
		result = 1;
	else
		result = 0;
	return (result);
}
