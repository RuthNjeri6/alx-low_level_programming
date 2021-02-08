/**
  * main - function the entry point
  * @void: no parametors given
  *
  * Return: upon sucess 0
  */
int _putchar(char c);

int main(void)
{
	char arry_str[] = "Holberton";
	int i = 0;

	while(arry_str[i] != '\0')
	{
		_putchar(arry_str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
