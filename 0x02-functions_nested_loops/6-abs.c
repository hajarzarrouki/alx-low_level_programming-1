#include "main.h"
/**
 * _abs - Entry point
 * @n: integer from which to get an absolute value
 * Return: Always 0 (Success)
 */
int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
