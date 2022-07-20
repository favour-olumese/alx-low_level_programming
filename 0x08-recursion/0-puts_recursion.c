#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: A character string parameter.
 *
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion((s + 1));
		_putchar('\n');
	}
}
