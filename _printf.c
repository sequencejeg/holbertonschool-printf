#include "main.h"

int _printf(const char* format, ...){

	va_list arguments;

	so_t conversion[] = { 
		{"c", print_character}, 
		{"s", print_string}, 
		{"%", print_percent},
		}
	 
	va_start(arguments, format);








	return ();
}