#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

typedef struct searchOperations
{
        char *operator;
        int (*function)(va_list);
} so_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_characters(va_list arguments);
int print_strings(va_list arguments);
int print_percent(__attribute__((unused))va_list arguments);
int print_integers(va_list arguments);

#endif
