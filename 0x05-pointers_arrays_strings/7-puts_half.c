#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: string to print
**/

void puts_half(char *str)
{
	int i, len = strlen(str);

	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
