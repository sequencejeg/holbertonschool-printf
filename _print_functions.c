#include "main.h"

/**
 * print_characters - prints characters
 * @arguments: list of arguments from which to print characters
 * 
 * Return: Number of characters printed
 */
int print_characters(va_list arguments)
{
	_putchar(va_arg(arguments, int));

	return (1);
}

/**
 * print_strings - prints strings
 * @arguments: list of arguments from which to print strings
 * 
 * Return: Number of characters printed
 */
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

/**
 * print_percent - prints a percent sign
 * @arguments: unused parameter
 * 
 * Return: Number of characters printed
 */
int print_percent(__attribute__((unused)) va_list arguments)
{
	_putchar('%');

	return (1);
}

/**
 * print_integers - prints integers
 * @arguments: list of arguments from which to print integers
 * 
 * Return: Number of characters printed
 */
int print_integers(va_list arguments)
{
	int numInput, counter = 0;
	unsigned int absolute, base, div = 1;

	numInput = va_arg(arguments, int);

	if (numInput < 0)
	{
		absolute = numInput * -1;
		counter += _putchar('-');
	}
	else
	{
		absolute = numInput;
	}

	base = absolute;

	while (base > 9)
	{
		base /= 10; 
		div *= 10;  
	}

	while (div > 0) 
	{
		counter += _putchar(((absolute / div) % 10) + '0');
		div /= 10;
	}

	return (counter);
}
