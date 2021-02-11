/**
  * _isupper - checks if a letter is uppercase
  * @c: takes an integer variable
  *
  * Return: 1 if uppercase, 0 otherwise
  */
int _isupper(int c)
{
	int result;

	if ((c >= 'A') && (c <= 'Z'))
		result = 1;
	else
		result = 0;
	return (result);
}
