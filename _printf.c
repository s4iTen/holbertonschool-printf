#include "main.h"

int (*find_function(const char *format))(va_list)
{
	unsigned int i = 0;
	code_f find_func[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_dec},
		{NULL, NULL}
	};

	while (find_func[i].ss)
	{
		if (find_func[i].ss[0] == (*format))
			return (find_func[i].f);
		i++;
	}
	return (NULL);
}


int _printf(const char *format, ...)
{
	va_list list;
	int (*f)(va_list);
	unsigned int i = 0, count = 0;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (format[i] == '\0')
			return (count);
		f = find_function(&format[i + 1]);
		if (f != NULL)
		{
			count += f(list);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(list);
	return (count);
}