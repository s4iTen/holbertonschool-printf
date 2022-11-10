#include "main.h"
#include <unistd.h>
/**
 * _putchar - check the code
 * @c: this is cariable char called 'c'
 * Return: always the adress of c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
