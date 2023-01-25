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
	int k;
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
				_putchar(va_arg(prtf, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				st = va_arg(prtf, char *);
				for (k = 0; st[k] != '\0'; k++)
				{
					if (st[k + 1] == 's')
						_putchar(st[k]);
					else if (st[k] != '%')
					{
						_putchar(st[k]);
					}
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
			}
		}
	}
}
