# _printf Project

This project is a simple re-implementation of the C standard library function `printf`. Our version, `_printf`, mimics the basic functionality of the original `printf` function, handling a subset of its format specifiers. This project is part of the Holberton School curriculum, designed to deepen understanding of variadic functions, string manipulation, and fundamental C programming concepts.

## Features

- `_printf` supports the following format specifiers:
- `%c`: Character
- `%s`: String
- `%d`: Decimal/Integer
- `%i`: Integer
- `%%`: Percent sign

## Installation

To use the `_printf` function in your projects, follow these steps:

Clone the repository to your local machine:
```bash
git clone https://github.com/sequencejeg/holbertonschool-printf.git

Include the main header file in your C files:
#include "main.h"

Compile your code along with the _printf files. For example:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output

Usage
Here is a simple example that shows how to use the _printf function:
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'H');
    _printf("String: %s\n", "Holberton");
    _printf("Percent: %%\n");
    _printf("Integer: %d\n", 1024);
    _printf("Integer: %i\n", -1024);
    return (0);
}

Authors
Jeremy Etienne and Ramon Vega
