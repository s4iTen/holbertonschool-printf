#include "main.h"
/**
 * print_char - check the code
 * @c: this is cariable char called 'c'
 * Return: always 1
 */
int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}
/**
 * print_porcentage - %
 * Return: 1.
 */
int print_porcentage(void)
{
	_putchar('%');
	return (1);
}
