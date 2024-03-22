Custom _printf Function

This repository includes a customized implementation of the C standard library function printf. This project is part of the Holberton School curriculum, and it aims to improve students' grasp of variadic functions, string formatting, and basic C input and output. Our _printf emulates a portion of the conventional printf functionality, including support for character (%c), string (%s), and percent (%%) specifiers.

Features
Character Printing: The function can print a single character using %c.
String Printing: It supports string printing with %s.
Percent Sign Printing: The function can print a literal percent sign %%.
Modular Design: Easy to extend with additional specifiers by modifying the conversion[] array.
Installation:
Clone this repository
Compile your program with main.h
Usage
To use the _printf function in your code, include the header file main.h and call _printf just like you would with the standard 'printf'.
How It Works
The _printf function reads through the format string provided. When it encounters a % followed by a known specifier (c, s, or %), it processes the corresponding argument from the variadic list and prints it accordingly. Unrecognized specifiers are printed as-is.

Limitations
The function does not support flag characters, field width, precision, or length modifiers.
It handles a limited set of conversion specifiers (%c, %s, %).

Contributing
Feel free to fork this repository and submit pull requests to contribute to its development. For major changes, please open an issue first to discuss what you would like to change.

Author
Jeremy Etienne

Acknowledgments
Holberton School

License
This project is open source and available
