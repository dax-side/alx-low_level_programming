#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 * Description: print string using recursion
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
