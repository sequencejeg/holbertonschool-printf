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

#endif