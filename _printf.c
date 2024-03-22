#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: format string containing the characters and the specifiers.
 *           This string is not modified.
 * Description: This function mimics the standard printf function from the
 * standard library. It supports the specifiers c, s, %, d, i.
 * Return: The number of characters printed (excluding the null byte used to
 * end output to strings).
 */

int _printf(const char* format, ...)
{

	va_list arguments;

	so_t conversion[] = { 
		{"c", print_characters}, 
		{"s", print_strings}, 
		{"%", print_percent}, 
		{"d", print_integers}, 
		{"i", print_integers}, 
		{NULL, NULL}, 
		};

	int i = 0, j, counter = 0;

	va_start(arguments, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
			{
				return (-1);
			}
			
			for (j = 0; conversion[j].function != NULL; j++)
			{
				if (format[i] == conversion[j].operator[0])
				{
					counter += conversion[j].function(arguments);

					break;
				}

			}

			if (conversion[j].function == NULL)
			{
				_putchar(format[i - 1]);

				counter++;

				_putchar(format[i]);

				counter++;
			}
			
		}

		else
		{
			_putchar(format[i]);

			counter++;
		}

		i++;
	}

	va_end(arguments);

	return (counter);
}
