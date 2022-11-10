#include "main.h"
/**
 * print_str - check the code
 * @s: this is cariable char called 's'
 * Return: always the i counter
 */
int print_str(va_list s)
{
	char *str;
	int  i = 0;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
