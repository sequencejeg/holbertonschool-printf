#include "main.h"

int _printf(const char* format, ...)
{

	va_list arguments;

	so_t conversion[] = { 
		{"c", print_character}, 
		{"s", print_string}, 
		{"%", print_percent},
		}

	int i, j, counter;
	 
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
				_putchar(format[i] - 1);

				counter ++;

				_putchar(format[i]);

				counter ++;
			}
			
		}

		else
		{
			_putchar(format[i]);

			counter ++;
		}

		i++;
	}

	va_end(arguments);

	return (counter);
}