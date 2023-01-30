#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - to print parameters
 * @format: the string to be printed
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list prtf;
	int i = 0;
	int k, num = 0;
	char *st = NULL;

	va_start(prtf, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			if (format[i + 1] == 'c')
			{

				_print_char(va_arg(prtf, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				st = va_arg(prtf, char *);
				_print_str(st);
			}
			else if (format[i + 1] == '%')
			{
				i++;
				// _putchar('%');
				_print_char('%');
			}
			// Muyiwa's part [ added integer specifier]
			else if (format[i + 1] == 'd')
			{
				i++;
				num = va_arg(prtf, int);
				_print_int(num);
			}
			// Muyiwa's part [ added integer specifier]
		}
	}
}
