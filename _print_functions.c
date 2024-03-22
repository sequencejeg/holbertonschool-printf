#include "main.h"

int print_characters(va_list arguments)
{
_putchar(va_arg(arguments, int));

	return (1);
	}

	int print_strings(va_list arguments)
	{
int i, counter = 0;
	char *pointer;

	pointer = va_arg(arguments, char *);

	if (pointer == NULL)
	{
	pointer = "(null)";
	}


	for (i = 0; pointer[i] != '\0'; i++)
	{
	_putchar(pointer[i]);

	counter++;
	}

	return (counter);

	}

	int print_percent(__attribute__((unused))va_list arguments)
	{
	_putchar('%');

	return (1);
	}

int print_integers(va_list arguments)
{
	int numInput, counter = 0;
	unsigned int absolute, base, div = 1;

	numInput = va_arg(arguments, int);

	if (numInput < 0)
	{
	absolute = numInput * -1;

	counter = counter + _putchar('-');
	}

	else
	{
	absolute = numInput;
	}

	base = absolute;

	while (base > 9)
	{
	base = base / 10;

	div = div * 10;
	}

	while (div > 0)
	{
	counter = counter + _putchar(((absolute / div) % 10) + '0');

	div = div / 10;
	}

	return (counter);

}
