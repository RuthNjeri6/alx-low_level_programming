/**
  * reverse_array - reverses elements of an array
  * @a: first parameter
  * @n: decond parameter
  *
  * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp, *begin, *end;

	begin = a;
	end = a;

	for (i = 0; i < n - 1; i++)
	{
		end++;
	}

	for (i = 0; i < n / 2; i++)
	{
		tmp = *end;
		*end = *begin;
		*begin = tmp;

		begin++;
		end--;
	}
}
