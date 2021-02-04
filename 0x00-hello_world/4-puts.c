/*Program to print a string using putc function */
#include<stdio.h>

int main()
{
	char array_string[] = 
	{ 
		'P', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g', ' ',
	       	'i', 's', ' ', 'l', 'i', 'k', 'e', ' ',
     		'b', 'u', 'i', 'd', 'i', 'n', 'g', ' ',	'a', ' ',
		'm', 'u', 'l', 't', 'i', 'l', 'i', 'n', 'g', 'u', 'a', 'l', 
		' ', 'p', 'u', 'z', 'z', 'l', 'e', '\0'
	};	
	putc(array_string, stdout);		
	return 0;
}
