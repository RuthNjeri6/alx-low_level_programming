/**
  * _isdigit - checks if a letter is digit
  * @c: takes an argument
  *
  * Return: returns 1 is true, 0 otherwise
  */
int _isdigit(int c)
{
	int result;

	if ((c <= '9') && (c >= '0'))
		result = 1;
	else
		result = 0;
	return (result);
}
