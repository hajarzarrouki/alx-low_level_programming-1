#include "main.h"
/**
 * _puts - Main Entry
 * @str: input
 */
void _puts(char *str)
{
for (int i = 0; *(str + i); i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
