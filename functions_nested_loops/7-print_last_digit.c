#include "main.h"

/**
 * print_last_digit -  print last digit of given number.
 *
 * Description: print last digit of given number. If
 * number is negative the value will return unsigned int.
 *
 * Return: last digit as int value.
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
