/**
  * _abs - gets the absolute value
  * @n: takes a integer argument
  *
  * Return: an integer
  */
int _abs(int n)
{
	int result;

	if (n < 0)
		result = n * -1;
	else
		result = n;
	return (result);
}
