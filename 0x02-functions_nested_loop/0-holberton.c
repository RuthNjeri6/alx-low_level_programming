/**
  * _putchar - declaration
  * @char: takes in a character argument
  *
  * Return: an integer retun value
 */
int _putchar(char);

/**
  * main -function the entry point
  * @void: takes no parametors
  *
  * Return: 0 upon success
  */
int main(void)
{
	char arry_str[] = "Holberton";
	int i = 0;

	while (arry_str[i] != '\0')
	{
		_putchar(arry_str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
