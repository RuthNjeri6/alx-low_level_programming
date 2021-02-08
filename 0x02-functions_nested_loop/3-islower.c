/**
  * _islower - islower function
  * @c: takes a integer argument
  *
  * Return: an integer
  */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = 1;
	else
		result = 0;
	return (result);
}
