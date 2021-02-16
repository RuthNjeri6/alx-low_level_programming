/**
  * swap_int - swaps two integers
  * @a: first argument
  * @b: second argument
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
